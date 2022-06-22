

#include <stdio.h>
#include "ap_fixed.h"

void case_55(
    ap_int<16> in_data[21],
    ap_int<16> out_data[13]
)
{

#pragma HLS array_partition variable=in_data complete
#pragma HLS array_partition variable=out_data complete

    

ap_int<6> in1;
in1.range(5, 0) = in_data[0].range(5, 0);
ap_int<14> in2;
in2.range(13, 0) = in_data[1].range(13, 0);
ap_int<2> in3;
in3.range(1, 0) = in_data[2].range(1, 0);
ap_int<12> in4;
in4.range(11, 0) = in_data[3].range(11, 0);
ap_int<10> in5;
in5.range(9, 0) = in_data[4].range(9, 0);
ap_int<15> in6;
in6.range(14, 0) = in_data[5].range(14, 0);
ap_int<16> in7;
in7.range(15, 0) = in_data[6].range(15, 0);
ap_int<5> in8;
in8.range(4, 0) = in_data[7].range(4, 0);
ap_int<2> in9;
in9.range(1, 0) = in_data[8].range(1, 0);
ap_int<2> in10;
in10.range(1, 0) = in_data[9].range(1, 0);
ap_int<12> in11;
in11.range(11, 0) = in_data[10].range(11, 0);
ap_int<9> in12;
in12.range(8, 0) = in_data[11].range(8, 0);
ap_int<13> in13;
in13.range(12, 0) = in_data[12].range(12, 0);
ap_int<9> in14;
in14.range(8, 0) = in_data[13].range(8, 0);
ap_int<15> in15;
in15.range(14, 0) = in_data[14].range(14, 0);
ap_int<14> in16;
in16.range(13, 0) = in_data[15].range(13, 0);
ap_int<16> in17;
in17.range(15, 0) = in_data[16].range(15, 0);
ap_int<13> in18;
in18.range(12, 0) = in_data[17].range(12, 0);
ap_int<11> in19;
in19.range(10, 0) = in_data[18].range(10, 0);
ap_int<13> in20;
in20.range(12, 0) = in_data[19].range(12, 0);
ap_int<8> in21;
in21.range(7, 0) = in_data[20].range(7, 0);

ap_int<11> m22;
ap_int<15> m23;
ap_int<4> m24;
ap_int<9> m25;
ap_int<9> m26;
ap_int<16> m27;
ap_int<7> m28;
ap_int<7> m29;
ap_int<8> m30;
ap_int<5> m31;
ap_int<6> m32;
ap_int<12> m33;
ap_int<15> m34;
ap_int<15> m35;
ap_int<8> m36;
ap_int<9> m37;
ap_int<9> m38;
ap_int<7> m39;
ap_int<6> m40;
ap_int<3> m41;
ap_int<5> m42;
ap_int<8> m43;
ap_int<15> m44;
ap_int<10> m45;
ap_int<14> m46;
ap_int<16> m47;
ap_int<7> m48;
ap_int<8> m49;
ap_int<8> m50;
ap_int<8> m51;
ap_int<9> m52;
ap_int<15> m53;
ap_int<13> m54;
ap_int<11> m55;
ap_int<10> m56;
ap_int<13> m57;
ap_int<16> m58;
ap_int<5> m59;
ap_int<5> m60;
ap_int<5> m61;
ap_int<8> m62;
ap_int<12> m63;
ap_int<7> m64;
ap_int<4> m65;
ap_int<12> m66;
ap_int<6> m67;
ap_int<15> m68;
ap_int<13> m69;
ap_int<12> m70;
ap_int<4> m71;
ap_int<7> m72;
ap_int<4> m73;
ap_int<7> m74;
ap_int<4> m75;
ap_int<8> m76;
ap_int<10> m77;
ap_int<13> m78;
ap_int<13> m79;
ap_int<16> m80;
ap_int<14> m81;
ap_int<6> m82;
ap_int<8> m83;
ap_int<16> m84;
ap_int<8> m85;
ap_int<4> m86;
ap_int<6> m87;
ap_int<10> m88;
ap_int<15> m89;
ap_int<13> m90;
ap_int<16> m91;
ap_int<15> m92;
ap_int<15> m93;
ap_int<16> m94;
ap_int<13> m95;
ap_int<8> m96;
ap_int<16> m97;
ap_int<9> m98;
ap_int<14> m99;
ap_int<11> m100;
ap_int<14> m101;
ap_int<15> m102;
ap_int<12> m103;
ap_int<16> m104;
ap_int<16> m105;
ap_int<9> m106;
ap_int<4> m107;
ap_int<14> m108;
ap_int<13> m109;
ap_int<6> m110;

m22 = in15 * in1;
m23 = in19 * in4;
m24 = in16 * in3;
m25 = in8 * in14;
m26 = in10 * m22;
m27 = in13 + m25;
m28 = in18 * in19;
m29 = in11 * in15;
m30 = m23 * in14;
m31 = in16 * m25;
m32 = m24 * in16;
m33 = m30 * in18;
m34 = m30 * in15;
m35 = m22 * m23;
m36 = m31 + m23;
m37 = in19 * m33;
m38 = m31 * m32;
m39 = m34 * m37;
m40 = m33 * m31;
m41 = m24 * m31;
m42 = m29 * m31;
m43 = m38 * m41;
m44 = m23 * m32;
m45 = m39 * m38;
m46 = m25 + m33;
m47 = m44 * m28;
m48 = m34 * m41;
m49 = m41 * m42;
m50 = m42 * m48;
m51 = m42 * m48;
m52 = m32 * m31;
m53 = m39 + m37;
m54 = m47 * m46;
m55 = m35 * m42;
m56 = m44 * m44;
m57 = m47 * m42;
m58 = m53 * m55;
m59 = m39 * m38;
m60 = m54 * m51;
m61 = m50 * m40;
m62 = m52 * m42;
m63 = m53 * m44;
m64 = m60 * m43;
m65 = m62 * m49;
m66 = m62 * m60;
m67 = m59 * m58;
m68 = m61 * m66;
m69 = m54 + m50;
m70 = m50 + m59;
m71 = m56 * m64;
m72 = m52 + m68;
m73 = m52 * m67;
m74 = m73 * m66;
m75 = m65 + m57;
m76 = m66 * m68;
m77 = m58 * m73;
m78 = m61 + m62;
m79 = m69 * m60;
m80 = m77 * m69;
m81 = m70 * m74;
m82 = m71 * m71;
m83 = m69 * m72;
m84 = m77 * m78;
m85 = m83 * m76;
m86 = m66 * m67;
m87 = m79 + m79;
m88 = m74 + m82;
m89 = m75 * m80;
m90 = m72 * m81;
m91 = m79 + m84;
m92 = m73 * m79;
m93 = m88 * m80;
m94 = m76 * m83;
m95 = m91 + m81;
m96 = m81 * m91;
m97 = m96 * m90;
m98 = m94 * m89;
m99 = m83 * m98;
m100 = m97 * m97;
m101 = m95 * m90;
m102 = m85 * m88;
m103 = m87 * m96;
m104 = m90 * m97;
m105 = m93 + m92;
m106 = m90 + m99;
m107 = m102 * m86;
m108 = m103 + m89;
m109 = m91 * m99;
m110 = m103 * m107;

out_data[0] = m26;
out_data[1] = m27;
out_data[2] = m36;
out_data[3] = m45;
out_data[4] = m63;
out_data[5] = m100;
out_data[6] = m101;
out_data[7] = m104;
out_data[8] = m105;
out_data[9] = m106;
out_data[10] = m108;
out_data[11] = m109;
out_data[12] = m110;


}
    