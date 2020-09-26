// Generated as part of Libecpint, Copyright 2017 Robert A Shaw
#include "qgen.hpp"
namespace libecpint {
namespace qgen {
void Q4_5_3(ECP& U, GaussianShell& shellA, GaussianShell& shellB, FiveIndex<double> &CA, FiveIndex<double> &CB, TwoIndex<double> &SA, TwoIndex<double> &SB, double Am, double Bm, RadialIntegral &radint, AngularIntegral& angint, ThreeIndex<double> &values) {

	std::vector<Triple> radial_triples_A = {
		{0, 3, 3},
		{1, 2, 3},
		{1, 3, 4},
		{2, 1, 3},
		{2, 2, 2},
		{2, 2, 4},
		{2, 3, 3},
		{2, 3, 5},
		{2, 4, 4},
		{3, 0, 3},
		{3, 1, 2},
		{3, 1, 4},
		{3, 2, 3},
		{3, 2, 5},
		{3, 3, 4},
		{3, 3, 6},
		{3, 4, 5},
		{4, 0, 2},
		{4, 0, 4},
		{4, 1, 1},
		{4, 1, 3},
		{4, 1, 5},
		{4, 2, 2},
		{4, 2, 4},
		{4, 2, 6},
		{4, 3, 3},
		{4, 3, 5},
		{4, 3, 7},
		{4, 4, 4},
		{4, 4, 6},
		{4, 5, 5},
		{5, 0, 1},
		{5, 0, 3},
		{5, 0, 5},
		{5, 1, 2},
		{5, 1, 4},
		{5, 1, 6},
		{5, 2, 3},
		{5, 2, 5},
		{5, 2, 7},
		{5, 3, 4},
		{5, 3, 6},
		{5, 3, 8},
		{5, 4, 5},
		{5, 4, 7},
		{5, 5, 6},
		{6, 0, 0},
		{6, 0, 2},
		{6, 0, 4},
		{6, 0, 6},
		{6, 1, 1},
		{6, 1, 3},
		{6, 1, 5},
		{6, 1, 7},
		{6, 2, 2},
		{6, 2, 4},
		{6, 2, 6},
		{6, 2, 8},
		{6, 3, 3},
		{6, 3, 5},
		{6, 3, 7},
		{6, 4, 4},
		{6, 4, 6},
		{6, 4, 8},
		{6, 5, 5},
		{6, 5, 7},
		{6, 6, 6},
		{7, 0, 1},
		{7, 0, 3},
		{7, 0, 5},
		{7, 0, 7},
		{7, 1, 2},
		{7, 1, 4},
		{7, 1, 6},
		{7, 1, 8},
		{7, 2, 3},
		{7, 2, 5},
		{7, 2, 7},
		{7, 3, 4},
		{7, 3, 6},
		{7, 3, 8},
		{7, 4, 5},
		{7, 4, 7},
		{7, 5, 6},
		{7, 5, 8},
		{7, 6, 7},
		{8, 0, 0},
		{8, 0, 2},
		{8, 0, 4},
		{8, 0, 6},
		{8, 0, 8},
		{8, 1, 1},
		{8, 1, 3},
		{8, 1, 5},
		{8, 1, 7},
		{8, 2, 2},
		{8, 2, 4},
		{8, 2, 6},
		{8, 2, 8},
		{8, 3, 3},
		{8, 3, 5},
		{8, 3, 7},
		{8, 4, 4},
		{8, 4, 6},
		{8, 4, 8},
		{8, 5, 5},
		{8, 5, 7},
		{8, 6, 6},
		{8, 6, 8},
		{8, 7, 7},
		{9, 1, 2},
		{9, 1, 4},
		{9, 1, 6},
		{9, 1, 8},
		{9, 3, 4},
		{9, 3, 6},
		{9, 3, 8},
		{9, 5, 6},
		{9, 5, 8},
		{9, 7, 8}	};

	ThreeIndex<double> radials(13, 8, 9);
	radint.type2(radial_triples_A, 15, 3, U, shellA, shellB, Am, Bm, radials);

	std::vector<Triple> radial_triples_B = {
		{1, 2, 3},
		{1, 3, 4},
		{2, 1, 3},
		{2, 2, 4},
		{2, 3, 5},
		{3, 1, 2},
		{3, 0, 3},
		{3, 2, 3},
		{3, 1, 4},
		{3, 3, 4},
		{3, 2, 5},
		{3, 4, 5},
		{3, 3, 6},
		{4, 0, 2},
		{4, 1, 3},
		{4, 0, 4},
		{4, 2, 4},
		{4, 1, 5},
		{4, 3, 5},
		{4, 2, 6},
		{4, 4, 6},
		{4, 3, 7},
		{5, 0, 1},
		{5, 1, 2},
		{5, 0, 3},
		{5, 2, 3},
		{5, 1, 4},
		{5, 3, 4},
		{5, 0, 5},
		{5, 2, 5},
		{5, 4, 5},
		{5, 1, 6},
		{5, 3, 6},
		{5, 5, 6},
		{5, 2, 7},
		{5, 4, 7},
		{6, 0, 2},
		{6, 1, 3},
		{6, 0, 4},
		{6, 2, 4},
		{6, 1, 5},
		{6, 3, 5},
		{6, 0, 6},
		{6, 2, 6},
		{6, 4, 6},
		{6, 1, 7},
		{6, 3, 7},
		{6, 5, 7},
		{7, 0, 1},
		{7, 1, 2},
		{7, 0, 3},
		{7, 2, 3},
		{7, 1, 4},
		{7, 3, 4},
		{7, 0, 5},
		{7, 2, 5},
		{7, 4, 5},
		{7, 1, 6},
		{7, 3, 6},
		{7, 5, 6},
		{7, 0, 7},
		{7, 2, 7},
		{7, 4, 7},
		{7, 6, 7},
		{8, 0, 2},
		{8, 1, 3},
		{8, 0, 4},
		{8, 2, 4},
		{8, 1, 5},
		{8, 3, 5},
		{8, 0, 6},
		{8, 2, 6},
		{8, 4, 6},
		{8, 1, 7},
		{8, 3, 7},
		{8, 5, 7},
		{9, 0, 1},
		{9, 0, 3},
		{9, 2, 3},
		{9, 0, 5},
		{9, 2, 5},
		{9, 4, 5},
		{9, 0, 7},
		{9, 2, 7},
		{9, 4, 7},
		{9, 6, 7}	};

	ThreeIndex<double> radials_B(13, 9, 8);
	radint.type2(radial_triples_B, 15, 3, U, shellB, shellA, Bm, Am, radials_B);
	for (Triple& t : radial_triples_B) radials(std::get<0>(t), std::get<2>(t), std::get<1>(t)) = radials_B(std::get<0>(t), std::get<1>(t), std::get<2>(t));

	rolled_up(3, 4, 5, radials, CA, CB, SA, SB, angint, values);
}
}
}
