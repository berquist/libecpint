#include "api.hpp"
#include "testutil.hpp"
#include <iostream>
#include <string>

				  	
double ag_exps[61]    = {1.800750E+02,2.189870E+01,1.386700E+01,6.142630E+00,1.438140E+00,6.483820E-01,1.288820E-01,4.573800E-02,
						 1.800750E+02,2.189870E+01,1.386700E+01,6.142630E+00,1.438140E+00,6.483820E-01,1.288820E-01,4.573800E-02,
					 	 1.800750E+02,2.189870E+01,1.386700E+01,6.142630E+00,1.438140E+00,6.483820E-01,1.288820E-01,4.573800E-02,
					 	 4.573800E-02,
					 	 1.187510E+01,8.002450E+00,2.017660E+00,9.542300E-01,4.231180E-01,1.358850E-01,4.540100E-02,
					 	 1.187510E+01,8.002450E+00,2.017660E+00,9.542300E-01,4.231180E-01,1.358850E-01,4.540100E-02,
					 	 1.187510E+01,8.002450E+00,2.017660E+00,9.542300E-01,4.231180E-01,1.358850E-01,4.540100E-02, 
					  	 4.540100E-02,
					 	 2.643200E+01,1.103450E+01,2.737870E+00,1.195750E+00,4.820420E-01,1.729080E-01,
					 	 2.643200E+01,1.103450E+01,2.737870E+00,1.195750E+00,4.820420E-01,1.729080E-01,
					  	 1.729080E-01,
					  	 1.329900E+00};
					  
double ag_coefs[61]   = {8.490000E-04,-6.545000E-02,2.977650E-01,-7.531210E-01,8.811750E-01,4.351760E-01,1.473800E-02,-1.399000E-03,
						-2.030000E-04,1.572300E-02,-7.922900E-02,2.226340E-01,-3.491960E-01,-2.559780E-01,5.486660E-01,6.181030E-01,
					 	-8.620000E-04,5.254600E-02,-2.081000E-01,5.249720E-01,-1.270173E+00,5.393730E-01,1.653391E+00,-1.583975E+00,
						 1.0,
					 	 1.162480E-01,-3.072860E-01,5.157360E-01,5.031040E-01,1.420950E-01,5.153000E-03,1.040000E-04,
					 	-2.828400E-02,7.834700E-02,-1.567410E-01,-1.886250E-01,6.356500E-02,5.817780E-01,4.999110E-01,
					 	-5.285700E-02,1.470390E-01,-3.129730E-01,-3.708280E-01,4.236290E-01,7.536550E-01,7.087000E-02,
						 1.0,
					 	 3.479000E-03,-1.384800E-02,2.545990E-01,4.498490E-01,3.757380E-01,1.458790E-01,
					 	-4.733000E-03,1.907000E-02,-4.332980E-01,-4.445680E-01,4.914420E-01,5.728660E-01,
						 1.0,
					 	 1.0};

double ag_centers[18] = {0.0,  3.0, 0.0,
						 2.6, -1.5, 0.0,
					     5.0,  2.9, 0.0,
					     0.0, -5.8, 0.0,
					    -4.0,  2.9, 0.0,
					    -2.6, -1.5, 0.0};

int ag_charges[6] = {47, 47, 47, 47, 47, 47};
int ag_lengths[12] = {8, 8, 8, 1, 7, 7, 7, 1, 6, 6, 1, 1};
int ag_ams[12] = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3};					

int main(int argc, char* argv[]) {
	using namespace libecpint; 
	
	std::vector<std::string> names;
	for (int i = 0; i < 6; i++) names.push_back("ecp28mdf");
	std::string share_dir = argv[1];
	double g_coords[3*12*6];
	double g_coefs[61*6];
	double g_exps[61*6];
	int g_lengths[12*6];
	int g_ams[12*6];
	double x, y, z;
	int gctr = 0;
	for (int i = 0; i < 6; i++) {
		x = ag_centers[3*i];
		y = ag_centers[3*i+1];
		z = ag_centers[3*i+2];
		int lctr = 0;
		for (int j = 0; j < 12; j++) {
			g_coords[36*i+3*j] = x;
			g_coords[36*i+3*j+1] = y;
			g_coords[36*i+3*j+2] = z;
			g_lengths[12*i+j] = ag_lengths[j];
			g_ams[12*i+j] = ag_ams[j];
			
			for (int k = 0; k < ag_lengths[j]; k++) {
				g_coefs[gctr] = ag_coefs[lctr];
				g_exps[gctr] = ag_exps[lctr];
				gctr++;
				lctr++;
			}
		}
	} 
	
	ECPIntegrator factory;
	factory.set_gaussian_basis(12*6, g_coords, g_exps, g_coefs, g_ams, g_lengths);
	factory.set_ecp_basis_from_library(6, ag_centers, ag_charges, names, share_dir);
	factory.init(0);
	factory.compute_integrals();
	//factory.compute_first_derivs();
	//factory.compute_second_derivs();
}
