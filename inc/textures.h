#ifndef TEXTURES_H
#define TEXTURES_H

typedef struct {
	uint32_t width;
	uint32_t height;
	size_t size;
	const uint8_t* pixels;
} Texture;

#define MAKE_TEXTURE(name) 								\
	static const Texture name = { 							\
        	.width  = (uint32_t)name##_blob[sizeof(name##_blob) - 8] << 0     | 	\
                  	 ((uint32_t)name##_blob[sizeof(name##_blob) - 7] << 8)    | 	\
			 ((uint32_t)name##_blob[sizeof(name##_blob) - 6] << 16)   | 	\
			 ((uint32_t)name##_blob[sizeof(name##_blob) - 5] << 24),  	\
        	.height = (uint32_t)name##_blob[sizeof(name##_blob) - 4]          | 	\
			 ((uint32_t)name##_blob[sizeof(name##_blob) - 3] << 8)    | 	\
			 ((uint32_t)name##_blob[sizeof(name##_blob) - 2] << 16)   | 	\
			 ((uint32_t)name##_blob[sizeof(name##_blob) - 1] << 24),  	\
        		.size   = sizeof(name##_blob) - 8,                              \
		        .pixels = name##_blob                                           \
	};

static const uint8_t texture_player_blob[] = {
	#embed "../assets/bin/texture_player.bin"
};
MAKE_TEXTURE(texture_player)

static const uint8_t texture_lok_blob[] = {
	#embed "../assets/bin/texture_lok.bin"
};
MAKE_TEXTURE(texture_lok)

static const uint8_t texture_zylinder_blob[] = {
	#embed "../assets/bin/texture_zylinder.bin"
};
MAKE_TEXTURE(texture_zylinder)

static const uint8_t texture_zaubererhut_blob[] = {
	#embed "../assets/bin/texture_zaubererhut.bin"
};
MAKE_TEXTURE(texture_zaubererhut)

#endif

