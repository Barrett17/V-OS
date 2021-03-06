/*
 * Copyright 2019-2020, Dario Casalinuovo. All rights reserved.
 * Distributed under the terms of the LGPL License.
 */

#include <syscalls.h>

#include <sys/xattr.h>

#include "KernelDebug.h"


int
_kern_open_attr_dir(int fd, const char* path,
		bool traverseLeafLink) {
	UNIMPLEMENTED();
	return B_ERROR;
}


ssize_t
_kern_read_attr(int fd, const char* attribute, off_t pos,
		void* buffer, size_t readBytes) {
	CALLED();

	return fgetxattr(fd, attribute, buffer, readBytes);
}


ssize_t
_kern_write_attr(int fd, const char* attribute, uint32 type,
		off_t pos, const void* buffer, size_t readBytes) {
	CALLED();

	return fsetxattr(fd, attribute, buffer, readBytes, 0);
}


status_t
_kern_stat_attr(int fd, const char* attribute,
		struct attr_info* attrInfo) {
	printf("%s\n", attribute);
	UNIMPLEMENTED();
	return B_ERROR;
}


int
_kern_open_attr(int fd, const char* path, const char* name,
		uint32 type, int openMode) {
	UNIMPLEMENTED();
	return B_ERROR;
}


status_t
_kern_remove_attr(int fd, const char* name) {
	CALLED();

	return fremovexattr(fd, name);
}


status_t
_kern_rename_attr(int fromFile, const char* fromName,
		int toFile, const char* toName) {
	UNIMPLEMENTED();
	return B_ERROR;
}
