void scroll_ssl_dl_Plane_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 142;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Plane_mesh_layer_1_vtx_0);

	deltaX = (int)(0.3700000047683716 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_ssl_dl_Plane_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Plane_001_mesh_layer_5_vtx_0);

	deltaX = (int)(0.5299999713897705 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sts_mat_ssl_dl_Water() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ssl_dl_Water);

	if (--curInterval0 <= 0) {
		shift_s(mat, 18, PACK_TILESIZE(0, 1));
		shift_t(mat, 18, PACK_TILESIZE(0, 1));
		curInterval0 = intervalTex0;
	}
};

void scroll_ssl_dl_Cube_006_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 24;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_Cube_006_mesh_layer_5_vtx_0);

	deltaX = (int)(1.0 * 0x20 * random_float() * random_sign()) % width;
	deltaY = (int)(1.0 * 0x20 * random_float() * random_sign()) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_ssl() {
	scroll_ssl_dl_Plane_mesh_layer_1_vtx_0();
	scroll_ssl_dl_Plane_001_mesh_layer_5_vtx_0();
	scroll_sts_mat_ssl_dl_Water();
	scroll_ssl_dl_Cube_006_mesh_layer_5_vtx_0();
}
