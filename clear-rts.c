#include <fcntl.h>
#include <sys/ioctl.h>
#define PORT "/dev/ttyUSB0"
main() {
  int fd;
  fd = open(PORT, O_RDWR | O_NOCTTY);
  ioctl(fd, TIOCMBIC, &TIOCM_RTS);
  close(fd);
}
