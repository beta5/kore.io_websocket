/* Auto generated */
#include <sys/types.h>

#include <kore/kore.h>
#include <kore/http.h>

#include "assets.h"

const u_int8_t asset_front2_html[] = {
0x3c,0x68,0x74,0x6d,0x6c,0x3e,0x3c,0x68,0x65,0x61,0x64,0x3e,0x3c,0x74,0x69,0x74,0x6c,0x65,0x3e,0x66,0x72,0x6f,0x6e,0x74,0x32,0x3c,0x2f,0x74,0x69,0x74,0x6c,0x65,0x3e,0x3c,0x2f,0x68,0x65,0x61,0x64,0x3e,0x3c,0x62,0x6f,0x64,0x79,0x3e,0x3c,0x68,0x31,0x3e,0x48,0x61,0x6c,0x6c,0x6f,0x20,0x66,0x72,0x6f,0x6e,0x74,0x32,0x2e,0x68,0x74,0x6d,0x6c,0x21,0x3c,0x2f,0x68,0x31,0x3e,0x3c,0x2f,0x62,0x6f,0x64,0x79,0x3e,0x3c,0x2f,0x68,0x74,0x6d,0x6c,0x3e,0x00};

const u_int32_t asset_len_front2_html = 87;
const time_t asset_mtime_front2_html = 1522498133;
const char *asset_sha256_front2_html = "\"3f914a277842f92f51dd9795aa4988134b82420b11150eb7a50c155af6e26ef5\"";
int
asset_serve_front2_html(struct http_request *req)
{
	http_serveable(req, asset_front2_html, asset_len_front2_html,
	    asset_sha256_front2_html, "text/plain");
	return (KORE_RESULT_OK);
}
