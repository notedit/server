
#ifndef ENCODER_FFMPEG_H
#define ENCODER_FFMPEG_H

#include "config.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "xdisplay.h"
#include "libavutil/pixfmt.h"

	typedef	struct  
	{
		unsigned char * data;
		unsigned long size;

	} Frame;

	void encoder_init(Configuration* config, int *frameWidth,int *frameHeight, int *bit_rate, int *fps, int pix_fmt_int);
	void encoder_encodeFrame(Image* image, Frame* frame);
	void free_av_packet();
#ifdef __cplusplus
}
#endif
#endif
