

#include <stdio.h>
#include "ap_fixed.h"

void case_27(
    ap_int<16> in_data[25],
    ap_int<16> out_data[37]
)
{

#pragma HLS array_partition variable=in_data complete
#pragma HLS array_partition variable=out_data complete

    

ap_int<2> in1;
in1.range(1, 0) = in_data[0].range(1, 0);
ap_int<4> in2;
in2.range(3, 0) = in_data[1].range(3, 0);
ap_int<14> in3;
in3.range(13, 0) = in_data[2].range(13, 0);
ap_int<8> in4;
in4.range(7, 0) = in_data[3].range(7, 0);
ap_int<7> in5;
in5.range(6, 0) = in_data[4].range(6, 0);
ap_int<14> in6;
in6.range(13, 0) = in_data[5].range(13, 0);
ap_int<9> in7;
in7.range(8, 0) = in_data[6].range(8, 0);
ap_int<13> in8;
in8.range(12, 0) = in_data[7].range(12, 0);
ap_int<6> in9;
in9.range(5, 0) = in_data[8].range(5, 0);
ap_int<10> in10;
in10.range(9, 0) = in_data[9].range(9, 0);
ap_int<3> in11;
in11.range(2, 0) = in_data[10].range(2, 0);
ap_int<9> in12;
in12.range(8, 0) = in_data[11].range(8, 0);
ap_int<6> in13;
in13.range(5, 0) = in_data[12].range(5, 0);
ap_int<10> in14;
in14.range(9, 0) = in_data[13].range(9, 0);
ap_int<16> in15;
in15.range(15, 0) = in_data[14].range(15, 0);
ap_int<5> in16;
in16.range(4, 0) = in_data[15].range(4, 0);
ap_int<12> in17;
in17.range(11, 0) = in_data[16].range(11, 0);
ap_int<4> in18;
in18.range(3, 0) = in_data[17].range(3, 0);
ap_int<10> in19;
in19.range(9, 0) = in_data[18].range(9, 0);
ap_int<3> in20;
in20.range(2, 0) = in_data[19].range(2, 0);
ap_int<7> in21;
in21.range(6, 0) = in_data[20].range(6, 0);
ap_int<7> in22;
in22.range(6, 0) = in_data[21].range(6, 0);
ap_int<15> in23;
in23.range(14, 0) = in_data[22].range(14, 0);
ap_int<3> in24;
in24.range(2, 0) = in_data[23].range(2, 0);
ap_int<9> in25;
in25.range(8, 0) = in_data[24].range(8, 0);

ap_int<10> m26;
ap_int<3> m27;
ap_int<7> m28;
ap_int<6> m29;
ap_int<12> m30;
ap_int<16> m31;
ap_int<4> m32;
ap_int<9> m33;
ap_int<6> m34;
ap_int<11> m35;
ap_int<2> m36;
ap_int<13> m37;
ap_int<11> m38;
ap_int<7> m39;
ap_int<7> m40;
ap_int<4> m41;
ap_int<9> m42;
ap_int<15> m43;
ap_int<14> m44;
ap_int<5> m45;
ap_int<6> m46;
ap_int<9> m47;
ap_int<9> m48;
ap_int<15> m49;
ap_int<9> m50;
ap_int<15> m51;
ap_int<6> m52;
ap_int<7> m53;
ap_int<16> m54;
ap_int<5> m55;
ap_int<14> m56;
ap_int<14> m57;
ap_int<16> m58;
ap_int<9> m59;
ap_int<9> m60;
ap_int<7> m61;
ap_int<9> m62;
ap_int<13> m63;
ap_int<16> m64;
ap_int<15> m65;
ap_int<14> m66;
ap_int<9> m67;
ap_int<11> m68;
ap_int<10> m69;
ap_int<11> m70;
ap_int<8> m71;
ap_int<15> m72;
ap_int<16> m73;
ap_int<6> m74;
ap_int<13> m75;
ap_int<13> m76;
ap_int<15> m77;
ap_int<8> m78;
ap_int<8> m79;
ap_int<7> m80;
ap_int<10> m81;
ap_int<10> m82;
ap_int<13> m83;
ap_int<12> m84;
ap_int<9> m85;
ap_int<10> m86;
ap_int<8> m87;
ap_int<5> m88;
ap_int<10> m89;
ap_int<5> m90;
ap_int<4> m91;
ap_int<7> m92;
ap_int<14> m93;
ap_int<8> m94;
ap_int<13> m95;
ap_int<9> m96;
ap_int<13> m97;
ap_int<9> m98;
ap_int<5> m99;
ap_int<13> m100;
ap_int<12> m101;
ap_int<8> m102;
ap_int<8> m103;
ap_int<10> m104;
ap_int<16> m105;
ap_int<10> m106;
ap_int<3> m107;
ap_int<10> m108;
ap_int<3> m109;
ap_int<10> m110;
ap_int<7> m111;
ap_int<11> m112;
ap_int<13> m113;
ap_int<8> m114;
ap_int<14> m115;
ap_int<5> m116;
ap_int<5> m117;
ap_int<10> m118;
ap_int<11> m119;
ap_int<4> m120;
ap_int<6> m121;
ap_int<10> m122;
ap_int<7> m123;
ap_int<9> m124;
ap_int<13> m125;
ap_int<7> m126;
ap_int<8> m127;
ap_int<12> m128;
ap_int<11> m129;
ap_int<8> m130;
ap_int<15> m131;
ap_int<7> m132;
ap_int<10> m133;
ap_int<9> m134;
ap_int<5> m135;
ap_int<5> m136;
ap_int<16> m137;
ap_int<11> m138;
ap_int<9> m139;
ap_int<12> m140;
ap_int<13> m141;
ap_int<15> m142;
ap_int<7> m143;
ap_int<9> m144;
ap_int<9> m145;
ap_int<8> m146;
ap_int<5> m147;
ap_int<15> m148;
ap_int<11> m149;
ap_int<8> m150;
ap_int<7> m151;
ap_int<7> m152;
ap_int<5> m153;
ap_int<10> m154;
ap_int<7> m155;
ap_int<12> m156;
ap_int<14> m157;
ap_int<12> m158;
ap_int<6> m159;
ap_int<14> m160;
ap_int<4> m161;
ap_int<6> m162;
ap_int<10> m163;
ap_int<7> m164;
ap_int<15> m165;
ap_int<10> m166;
ap_int<14> m167;
ap_int<9> m168;
ap_int<12> m169;
ap_int<13> m170;
ap_int<7> m171;
ap_int<15> m172;
ap_int<16> m173;
ap_int<4> m174;
ap_int<15> m175;
ap_int<13> m176;
ap_int<7> m177;
ap_int<11> m178;
ap_int<9> m179;
ap_int<12> m180;
ap_int<10> m181;
ap_int<6> m182;
ap_int<13> m183;
ap_int<11> m184;
ap_int<9> m185;
ap_int<12> m186;
ap_int<7> m187;
ap_int<13> m188;
ap_int<8> m189;
ap_int<9> m190;
ap_int<6> m191;
ap_int<16> m192;
ap_int<7> m193;
ap_int<11> m194;
ap_int<8> m195;
ap_int<11> m196;
ap_int<7> m197;
ap_int<7> m198;
ap_int<8> m199;
ap_int<14> m200;
ap_int<12> m201;
ap_int<16> m202;
ap_int<10> m203;
ap_int<10> m204;
ap_int<10> m205;
ap_int<8> m206;
ap_int<14> m207;
ap_int<16> m208;
ap_int<15> m209;
ap_int<8> m210;
ap_int<9> m211;
ap_int<5> m212;
ap_int<13> m213;
ap_int<15> m214;

m26 = in14 * in18;
m27 = in25 * in2;
m28 = in4 * in7;
m29 = in24 * in24;
m30 = in9 * in14;
m31 = in23 * in17;
m32 = m30 * m27;
m33 = in21 + in25;
m34 = in22 * m33;
m35 = m29 * in23;
m36 = in24 * m32;
m37 = m36 * m31;
m38 = in24 * in23;
m39 = m30 * in16;
m40 = in22 * m32;
m41 = in18 + in21;
m42 = in18 * m40;
m43 = m26 * m35;
m44 = m34 * m30;
m45 = in22 * m31;
m46 = m32 * m32;
m47 = in24 * m29;
m48 = m34 * m45;
m49 = m35 * m42;
m50 = in25 * m42;
m51 = m47 * m43;
m52 = m40 + m49;
m53 = m52 * m52;
m54 = m30 * m33;
m55 = m33 * m42;
m56 = m54 * m54;
m57 = m51 * m38;
m58 = m54 + m44;
m59 = m58 * m40;
m60 = m51 + m44;
m61 = m37 * m50;
m62 = m55 + m44;
m63 = m56 * m61;
m64 = m56 * m51;
m65 = m64 + m64;
m66 = m47 * m52;
m67 = m44 * m53;
m68 = m54 * m65;
m69 = m58 * m44;
m70 = m56 * m65;
m71 = m51 * m52;
m72 = m63 * m47;
m73 = m66 + m62;
m74 = m61 + m52;
m75 = m70 * m69;
m76 = m61 * m70;
m77 = m55 + m73;
m78 = m58 * m66;
m79 = m67 * m72;
m80 = m55 + m77;
m81 = m72 + m61;
m82 = m61 * m60;
m83 = m81 * m78;
m84 = m62 * m64;
m85 = m83 * m71;
m86 = m77 * m67;
m87 = m67 * m80;
m88 = m87 * m75;
m89 = m77 * m65;
m90 = m71 * m65;
m91 = m74 * m67;
m92 = m80 * m70;
m93 = m73 * m73;
m94 = m85 + m90;
m95 = m83 * m88;
m96 = m79 + m71;
m97 = m72 * m96;
m98 = m88 + m87;
m99 = m89 + m74;
m100 = m86 * m90;
m101 = m83 + m85;
m102 = m87 * m101;
m103 = m101 * m94;
m104 = m95 * m85;
m105 = m99 * m100;
m106 = m89 * m91;
m107 = m99 * m89;
m108 = m83 * m100;
m109 = m98 * m90;
m110 = m104 * m105;
m111 = m90 * m94;
m112 = m90 * m104;
m113 = m89 * m100;
m114 = m99 + m90;
m115 = m98 + m93;
m116 = m109 * m109;
m117 = m106 * m98;
m118 = m97 * m114;
m119 = m110 * m117;
m120 = m115 * m117;
m121 = m103 * m99;
m122 = m108 * m101;
m123 = m117 + m117;
m124 = m105 * m118;
m125 = m112 * m118;
m126 = m101 * m118;
m127 = m113 * m103;
m128 = m127 * m124;
m129 = m104 * m114;
m130 = m116 * m120;
m131 = m110 + m111;
m132 = m125 * m107;
m133 = m109 + m132;
m134 = m111 * m109;
m135 = m116 * m131;
m136 = m133 + m116;
m137 = m114 * m127;
m138 = m123 * m133;
m139 = m136 * m132;
m140 = m130 * m124;
m141 = m129 * m137;
m142 = m140 * m138;
m143 = m119 * m132;
m144 = m119 + m135;
m145 = m125 + m130;
m146 = m140 * m130;
m147 = m138 * m139;
m148 = m127 * m143;
m149 = m135 * m126;
m150 = m130 * m147;
m151 = m146 * m127;
m152 = m127 * m142;
m153 = m146 + m150;
m154 = m132 * m146;
m155 = m147 * m132;
m156 = m142 * m148;
m157 = m148 * m148;
m158 = m134 + m145;
m159 = m152 * m150;
m160 = m145 * m157;
m161 = m146 * m154;
m162 = m143 * m155;
m163 = m139 * m161;
m164 = m155 * m160;
m165 = m142 * m148;
m166 = m149 * m147;
m167 = m163 * m158;
m168 = m156 * m157;
m169 = m160 * m165;
m170 = m163 + m150;
m171 = m147 * m162;
m172 = m160 * m157;
m173 = m167 * m166;
m174 = m149 + m155;
m175 = m171 * m156;
m176 = m168 + m167;
m177 = m155 * m155;
m178 = m162 + m172;
m179 = m156 * m167;
m180 = m178 * m155;
m181 = m172 * m169;
m182 = m177 * m165;
m183 = m162 * m181;
m184 = m171 * m176;
m185 = m184 * m162;
m186 = m167 + m177;
m187 = m168 * m174;
m188 = m175 + m170;
m189 = m181 * m174;
m190 = m185 * m179;
m191 = m174 + m174;
m192 = m186 * m188;
m193 = m191 * m187;
m194 = m178 * m178;
m195 = m177 * m187;
m196 = m174 * m188;
m197 = m184 * m189;
m198 = m196 * m193;
m199 = m183 * m175;
m200 = m183 * m196;
m201 = m185 * m200;
m202 = m195 * m184;
m203 = m192 * m198;
m204 = m190 * m201;
m205 = m193 * m190;
m206 = m181 * m186;
m207 = m184 * m203;
m208 = m186 * m197;
m209 = m201 * m192;
m210 = m190 * m196;
m211 = m203 * m202;
m212 = m204 * m196;
m213 = m202 * m195;
m214 = m193 * m202;

out_data[0] = m28;
out_data[1] = m39;
out_data[2] = m41;
out_data[3] = m46;
out_data[4] = m48;
out_data[5] = m57;
out_data[6] = m59;
out_data[7] = m68;
out_data[8] = m76;
out_data[9] = m82;
out_data[10] = m84;
out_data[11] = m92;
out_data[12] = m102;
out_data[13] = m121;
out_data[14] = m122;
out_data[15] = m128;
out_data[16] = m141;
out_data[17] = m144;
out_data[18] = m151;
out_data[19] = m153;
out_data[20] = m159;
out_data[21] = m164;
out_data[22] = m173;
out_data[23] = m180;
out_data[24] = m182;
out_data[25] = m194;
out_data[26] = m199;
out_data[27] = m205;
out_data[28] = m206;
out_data[29] = m207;
out_data[30] = m208;
out_data[31] = m209;
out_data[32] = m210;
out_data[33] = m211;
out_data[34] = m212;
out_data[35] = m213;
out_data[36] = m214;


}
    