#define IOCTL_PRINT_DEBUG_MESS CTL_CODE( \
	FILE_DEVICE_UNKNOWN, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_CHANGE_IRQL CTL_CODE(\
	FILE_DEVICE_UNKNOWN, 0x802, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_MAKE_SYSTEM_CRASH CTL_CODE( \
	FILE_DEVICE_UNKNOWN, 0x803, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_TOUCH_PORT_378H CTL_CODE( \
	FILE_DEVICE_UNKNOWN, 0x804, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_SEND_BYTE_TO_USER CTL_CODE( \
	FILE_DEVICE_UNKNOWN, 0x805, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_GET_FRIENDLY_PARTIION_NAME CTL_CODE(\
	FILE_DEVICE_UNKNOWN, 0x806, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_VMCALL CTL_CODE( \
	FILE_DEVICE_UNKNOWN, 0x808, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define INTERCEPTION_CODE CTL_CODE( \
	FILE_DEVICE_UNKNOWN, 0x809, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define INTERRUPT_CODE CTL_CODE( \
	FILE_DEVICE_UNKNOWN, 0x810, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define ENUM_PARTITION_CODE CTL_CODE( \
	FILE_DEVICE_UNKNOWN, 0x811, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define SEND_MESSAGE_TO_HOST CTL_CODE( \
	FILE_DEVICE_UNKNOWN, 0x812, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define START_FUZZING CTL_CODE( \
	FILE_DEVICE_UNKNOWN, 0x813, METHOD_BUFFERED, FILE_ANY_ACCESS)