

#include <stdio.h>
#include "ap_fixed.h"

void case_3(
    ap_int<16> in_data[22],
    ap_int<16> out_data[20]
)
{

#pragma HLS array_partition variable=in_data complete
#pragma HLS array_partition variable=out_data complete

    

ap_int<2> in1;
in1.range(1, 0) = in_data[0].range(1, 0);
ap_int<6> in2;
in2.range(5, 0) = in_data[1].range(5, 0);
ap_int<3> in3;
in3.range(2, 0) = in_data[2].range(2, 0);
ap_int<3> in4;
in4.range(2, 0) = in_data[3].range(2, 0);
ap_int<14> in5;
in5.range(13, 0) = in_data[4].range(13, 0);
ap_int<11> in6;
in6.range(10, 0) = in_data[5].range(10, 0);
ap_int<12> in7;
in7.range(11, 0) = in_data[6].range(11, 0);
ap_int<2> in8;
in8.range(1, 0) = in_data[7].range(1, 0);
ap_int<2> in9;
in9.range(1, 0) = in_data[8].range(1, 0);
ap_int<12> in10;
in10.range(11, 0) = in_data[9].range(11, 0);
ap_int<4> in11;
in11.range(3, 0) = in_data[10].range(3, 0);
ap_int<9> in12;
in12.range(8, 0) = in_data[11].range(8, 0);
ap_int<9> in13;
in13.range(8, 0) = in_data[12].range(8, 0);
ap_int<9> in14;
in14.range(8, 0) = in_data[13].range(8, 0);
ap_int<16> in15;
in15.range(15, 0) = in_data[14].range(15, 0);
ap_int<13> in16;
in16.range(12, 0) = in_data[15].range(12, 0);
ap_int<4> in17;
in17.range(3, 0) = in_data[16].range(3, 0);
ap_int<10> in18;
in18.range(9, 0) = in_data[17].range(9, 0);
ap_int<9> in19;
in19.range(8, 0) = in_data[18].range(8, 0);
ap_int<6> in20;
in20.range(5, 0) = in_data[19].range(5, 0);
ap_int<16> in21;
in21.range(15, 0) = in_data[20].range(15, 0);
ap_int<14> in22;
in22.range(13, 0) = in_data[21].range(13, 0);

ap_int<5> m23;
ap_int<3> m24;
ap_int<11> m25;
ap_int<4> m26;
ap_int<4> m27;
ap_int<4> m28;
ap_int<10> m29;
ap_int<7> m30;
ap_int<9> m31;
ap_int<12> m32;
ap_int<9> m33;
ap_int<11> m34;
ap_int<12> m35;
ap_int<5> m36;
ap_int<14> m37;
ap_int<11> m38;
ap_int<7> m39;
ap_int<15> m40;
ap_int<9> m41;
ap_int<14> m42;
ap_int<5> m43;
ap_int<6> m44;
ap_int<10> m45;
ap_int<10> m46;
ap_int<13> m47;
ap_int<11> m48;
ap_int<14> m49;
ap_int<9> m50;
ap_int<6> m51;
ap_int<10> m52;
ap_int<12> m53;
ap_int<9> m54;
ap_int<5> m55;
ap_int<12> m56;
ap_int<15> m57;
ap_int<13> m58;
ap_int<8> m59;
ap_int<10> m60;
ap_int<3> m61;
ap_int<10> m62;
ap_int<5> m63;
ap_int<14> m64;
ap_int<10> m65;
ap_int<12> m66;
ap_int<7> m67;
ap_int<3> m68;
ap_int<9> m69;
ap_int<16> m70;
ap_int<10> m71;
ap_int<4> m72;
ap_int<6> m73;
ap_int<8> m74;
ap_int<8> m75;
ap_int<12> m76;
ap_int<8> m77;
ap_int<14> m78;
ap_int<9> m79;
ap_int<4> m80;
ap_int<3> m81;
ap_int<5> m82;
ap_int<15> m83;
ap_int<15> m84;
ap_int<7> m85;
ap_int<13> m86;
ap_int<12> m87;
ap_int<16> m88;
ap_int<8> m89;
ap_int<6> m90;
ap_int<4> m91;
ap_int<7> m92;
ap_int<8> m93;
ap_int<8> m94;
ap_int<10> m95;
ap_int<16> m96;
ap_int<6> m97;
ap_int<4> m98;
ap_int<5> m99;
ap_int<6> m100;
ap_int<16> m101;
ap_int<9> m102;

m23 = in4 + in9;
m24 = in20 * in17;
m25 = in9 * in12;
m26 = in14 * in8;
m27 = in9 * in16;
m28 = in18 * m26;
m29 = in7 * in8;
m30 = in20 * in20;
m31 = m25 + in20;
m32 = in18 * m25;
m33 = m28 * in18;
m34 = in14 * m24;
m35 = in19 * in19;
m36 = m32 * m30;
m37 = m32 * in22;
m38 = m25 * m23;
m39 = m28 + in17;
m40 = m27 * m38;
m41 = m23 * m34;
m42 = m37 * m24;
m43 = m40 * m36;
m44 = m25 * m24;
m45 = m43 * m38;
m46 = m37 + m28;
m47 = m45 * m29;
m48 = m29 + m40;
m49 = m41 * m40;
m50 = m37 * m45;
m51 = m50 + m36;
m52 = m34 * m48;
m53 = m50 * m41;
m54 = m33 * m41;
m55 = m44 * m38;
m56 = m35 * m50;
m57 = m51 * m54;
m58 = m48 * m41;
m59 = m45 * m56;
m60 = m42 * m51;
m61 = m44 * m44;
m62 = m48 * m57;
m63 = m62 * m54;
m64 = m43 * m56;
m65 = m59 + m48;
m66 = m46 * m45;
m67 = m48 * m62;
m68 = m63 + m60;
m69 = m60 * m66;
m70 = m57 * m55;
m71 = m51 * m64;
m72 = m61 + m61;
m73 = m68 * m61;
m74 = m62 + m55;
m75 = m72 + m58;
m76 = m72 * m60;
m77 = m76 * m72;
m78 = m57 + m66;
m79 = m77 * m57;
m80 = m72 * m60;
m81 = m67 * m80;
m82 = m62 + m74;
m83 = m79 * m77;
m84 = m75 * m70;
m85 = m64 * m70;
m86 = m74 * m78;
m87 = m79 + m71;
m88 = m70 * m71;
m89 = m71 * m78;
m90 = m88 * m81;
m91 = m90 * m82;
m92 = m72 * m70;
m93 = m79 + m81;
m94 = m75 + m83;
m95 = m79 + m89;
m96 = m76 + m92;
m97 = m94 * m90;
m98 = m90 * m77;
m99 = m88 + m85;
m100 = m82 * m88;
m101 = m93 * m84;
m102 = m93 * m80;

out_data[0] = m31;
out_data[1] = m39;
out_data[2] = m47;
out_data[3] = m49;
out_data[4] = m52;
out_data[5] = m53;
out_data[6] = m65;
out_data[7] = m69;
out_data[8] = m73;
out_data[9] = m86;
out_data[10] = m87;
out_data[11] = m91;
out_data[12] = m95;
out_data[13] = m96;
out_data[14] = m97;
out_data[15] = m98;
out_data[16] = m99;
out_data[17] = m100;
out_data[18] = m101;
out_data[19] = m102;


}
    