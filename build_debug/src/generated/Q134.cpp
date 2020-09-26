// Generated as part of Libecpint, Copyright 2017 Robert A Shaw
#include "qgen.hpp"
namespace libecpint {
namespace qgen {
void Q1_3_4(ECP& U, GaussianShell& shellA, GaussianShell& shellB, FiveIndex<double> &CA, FiveIndex<double> &CB, TwoIndex<double> &SA, TwoIndex<double> &SB, double Am, double Bm, RadialIntegral &radint, AngularIntegral& angint, ThreeIndex<double> &values) {

	std::vector<Triple> radial_triples_A = {
		{0, 4, 4},
		{1, 3, 4},
		{1, 4, 5},
		{2, 3, 3},
		{2, 3, 5},
		{2, 4, 4},
		{2, 4, 6},
		{2, 5, 5},
		{3, 3, 4},
		{3, 3, 6},
		{3, 4, 5},
		{3, 4, 7},
		{3, 5, 6},
		{4, 3, 3},
		{4, 3, 5},
		{4, 3, 7},
		{4, 5, 5},
		{4, 5, 7}	};

	ThreeIndex<double> radials(9, 6, 8);
	radint.type2(radial_triples_A, 8, 4, U, shellA, shellB, Am, Bm, radials);

	std::vector<Triple> radial_triples_B = {
		{1, 3, 4},
		{1, 4, 5},
		{2, 2, 4},
		{2, 3, 5},
		{3, 2, 3},
		{3, 1, 4},
		{3, 3, 4},
		{3, 2, 5},
		{3, 4, 5},
		{4, 1, 3},
		{4, 1, 5},
		{4, 3, 5}	};

	ThreeIndex<double> radials_B(9, 8, 6);
	radint.type2(radial_triples_B, 8, 4, U, shellB, shellA, Bm, Am, radials_B);
	for (Triple& t : radial_triples_B) radials(std::get<0>(t), std::get<2>(t), std::get<1>(t)) = radials_B(std::get<0>(t), std::get<1>(t), std::get<2>(t));

	rolled_up(4, 1, 3, radials, CA, CB, SA, SB, angint, values);
}
}
}
