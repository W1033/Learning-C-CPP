// Created on 2019/6/20.

# include <stdio.h>

int main(void) {

    // - plank [plæŋk] ~~~n.板，木板，板子
    // - piece [piːs] ~n.一片，一块，部分  ~~~vt.拼凑，修补

    float plank_length = 10.0f; // In feet
    float piece_count = 4.0f;   // Number of equal pieces
    float piece_length = 0.0f;  // Length of a piece in feet

    piece_length = plank_length / piece_count;
    // 一块 10.00 英尺的木板可以切成 4 块 2.50 英尺长的小木板。
    printf("A plank %.2f feet long can be cut into %.0f pieces %.2f feet long."
           "\n", plank_length, piece_count, piece_length);
}

