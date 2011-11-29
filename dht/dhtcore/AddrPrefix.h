#ifndef ADDR_PREFIX_H
#define ADDR_PREFIX_H

#include <netinet/in.h>

/**
 * Get the high 4 bytes from the address in host order.
 *
 * @param address a buffer of bytes.
 * @return the first 4 in host order.
 */
static inline uint32_t AddrPrefix_get(const uint8_t address[20])
{
    return ntohl(((uint32_t*) address)[0]);
}

#endif