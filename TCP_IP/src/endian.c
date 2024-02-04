// htons -- host to network short
// ntohs -- net
#include <stdio.h>
#include <arpa/inet.h>

int main()
{
    int d_htons = htons(0x1234);
    int d_ntohs = ntohs(0x1234);
    int d_htonl = htonl(0x12345678);
    int d_ntohl = ntohl(0x12345678);
    printf("0x1234 ==>d_htons:%x\n", d_htons);
    printf("0x1234 ==>d_ntohs:%x\n", d_ntohs);
    printf("0x12345678 ==>d_htonl:%x\n", d_htonl);
    printf("0x12345678 ==>d_ntohl:%x\n", d_ntohl);
    inet_ntoa()
    return 0;
}
