typedef int uv_file;

#define AF_INET
#define AF_INET6
#define AF_UNSPEC
#define SOCK_STREAM
#define SOCK_DGRAM

struct addrinfo {
  int              ai_flags;
  int              ai_family;
  int              ai_socktype;
  int              ai_protocol;
  socklen_t        ai_addrlen;
  struct sockaddr *ai_addr;
  char            *ai_canonname;
  struct addrinfo *ai_next;
};

typedef struct sockaddr {};
typedef struct sockaddr_in {};
typedef struct sockaddr_in6 {};
