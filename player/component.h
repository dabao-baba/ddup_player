#ifndef __COMPONENT_H__
#define __COMPONENT_H__

#include "player/demux.h"
#include "player/event_listener.h"
#include "player/pipeline.h"
#include "player/stream.h"

int CreatePipeline(EventListener *listener, Pipeline **pipeline);
int CreateDemux(EventListener *listener, Demux **demux);
int CreateStream(stream_type_t type, void *stream_info, Stream **Stream);
int CreateDecoder(void *codec_param, Decoder **decoder);

#endif