// lethal land water boxes
static Movtex ll_movtex_area1_water_data[] = {
    MOV_TEX_INIT_LOAD(   1),
    MOV_TEX_ROT_SPEED(  30),
    MOV_TEX_ROT_SCALE(  30),
    MOV_TEX_4_BOX_TRIS(-10907, -12507),
    MOV_TEX_4_BOX_TRIS(-10907, 12507),
    MOV_TEX_4_BOX_TRIS(10907, 12507),
    MOV_TEX_4_BOX_TRIS(10907, -12507),
    MOV_TEX_ROT(ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(0xAA),
    MOV_TEX_DEFINE(TEXTURE_WATER),
    MOV_TEX_END(),
};

// Move texture quad collection.
const struct MovtexQuadCollection ll_movtex_area1_water[] = {
    {0, ll_movtex_area1_water_data},
    {-1, NULL},
};
