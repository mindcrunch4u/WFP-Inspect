#if 0
#include "extra.h"
#include "basetsd.h"
#include "Ws2ipdef.h"

/*typedefs should be in the source files: 
   https://learn.microsoft.com/en-us/cpp/error-messages/compiler-errors-1/compiler-error-c2059?view=msvc-170
   */

/*from: wireguard-nt\driver\arithmetic.h */
typedef  UINT16 UINT16_BE;
typedef  UINT16 UINT16_LE;
typedef  UINT32 UINT32_BE;
typedef  UINT32 UINT32_LE;
typedef  UINT64 UINT64_BE;
typedef  UINT64 UINT64_LE;

/*from: wireguard-nt\driver\messages.h */
typedef struct _IPV4HDR
{
#if REG_DWORD == REG_DWORD_LITTLE_ENDIAN
   UINT8 Ihl : 4, Version : 4;
#elif REG_DWORD == REG_DWORD_BIG_ENDIAN
   UINT8 Version : 4, Ihl : 4;
#endif
   UINT8 Tos;
   UINT16_BE TotLen;
   UINT16_BE Id;
   UINT16_BE FragOff;
   UINT8 Ttl;
   UINT8 Protocol;
   UINT16_BE Check;
   UINT32_BE Saddr;
   UINT32_BE Daddr;
} IPV4HDR;

typedef struct _IPV6HDR
{
#if REG_DWORD == REG_DWORD_LITTLE_ENDIAN
   UINT8 Priority : 4, Version : 4;
#elif REG_DWORD == REG_DWORD_BIG_ENDIAN
   UINT8 Version : 4, Priority : 4;
#endif
   UINT8 FlowLbl[3];
   UINT16_BE PayloadLen;
   UINT8 Nexthdr;
   UINT8 HopLimit;
   IN6_ADDR Saddr;
   IN6_ADDR Daddr;
} IPV6HDR;
#endif