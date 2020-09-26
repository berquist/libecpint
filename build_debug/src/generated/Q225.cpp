// Generated as part of Libecpint, Copyright 2017 Robert A Shaw
#include "qgen.hpp"
namespace libecpint {
namespace qgen {
void Q2_2_5(ECP& U, GaussianShell& shellA, GaussianShell& shellB, FiveIndex<double> &CA, FiveIndex<double> &CB, TwoIndex<double> &SA, TwoIndex<double> &SB, double Am, double Bm, RadialIntegral &radint, AngularIntegral& angint, ThreeIndex<double> &values) {

	std::vector<Triple> radial_triples_A = {
		{0, 5, 5},
		{1, 4, 5},
		{1, 5, 6},
		{2, 3, 5},
		{2, 4, 4},
		{2, 4, 6},
		{2, 5, 5},
		{2, 5, 7},
		{2, 6, 6},
		{3, 3, 4},
		{3, 3, 6},
		{3, 4, 5},
		{3, 4, 7},
		{3, 5, 6},
		{3, 6, 7},
		{4, 3, 3},
		{4, 3, 5},
		{4, 3, 7},
		{4, 5, 5},
		{4, 5, 7},
		{4, 7, 7}	};

	ThreeIndex<double> radials(10, 8, 8);
	radint.type2(radial_triples_A, 10, 5, U, shellA, shellB, Am, Bm, radials);

	std::vector<Triple> radial_triples_B = {
		{1, 4, 5},
		{1, 5, 6},
		{2, 3, 5},
		{2, 4, 6},
		{2, 5, 7},
		{3, 3, 4},
		{3, 4, 5},
		{3, 3, 6},
		{3, 5, 6},
		{3, 4, 7},
		{3, 6, 7},
		{4, 3, 5},
		{4, 3, 7},
		{4, 5, 7}	};

	ThreeIndex<double> radials_B(10, 8, 8);
	radint.type2(radial_triples_B, 10, 5, U, shellB, shellA, Bm, Am, radials_B);
	for (Triple& t : radial_triples_B) radials(std::get<0>(t), std::get<2>(t), std::get<1>(t)) = radials_B(std::get<0>(t), std::get<1>(t), std::get<2>(t));

	rolled_up(5, 2, 2, radials, CA, CB, SA, SB, angint, values);
}
}
}
