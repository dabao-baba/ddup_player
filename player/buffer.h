#ifndef _BUFFER_H__
#define _BUFFER_H__

#define SUPPORTED_PIXEL_FORMAT_COUNT 5

typedef enum PXIEL_FORMART {
  PIXELFORMAT_ARGB8888 = 0,
  PIXELFORMAT_BGRA8888 = 1,
  PIXELFORMAT_IYUV = 2,
  PIXELFORMAT_YUY2 = 3,
  PIXELFORMAT_UYVY = 4,
  PIXELFORMAT_UNKNOWN = 10,
} pixel_format_t;

typedef struct RenderBuffer {
  char *data[4];
  int len[4];
  int width;
  int height;
  pixel_format_t pixel;
  int frame_rate;
  long long pts;  // ms
} render_buffer_s;

typedef struct VideoFormat {
  int width;
  int height;
  pixel_format_t pixel[SUPPORTED_PIXEL_FORMAT_COUNT];
} video_format_s;

typedef struct AudioFormat {
  int sample_rate;
  int sample_format;
  int channel_number;
} audio_format_s;

#endif
