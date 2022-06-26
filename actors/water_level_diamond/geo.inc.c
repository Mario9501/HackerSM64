// 0x0E0005C0
const GeoLayout water_level_diamond_geo[] = {
   GEO_CULLING_RADIUS(1200),
   GEO_OPEN_NODE(),
      GEO_SHADOW(SHADOW_SQUARE_SCALABLE, 0x96, 90),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_seg7_dl_070131B8),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
