/* auto-generated by gen_syscalls.py, don't edit */

#include <syscalls/kernel.h>

extern int z_vrfy_k_thread_join(struct k_thread * thread, k_timeout_t timeout);
uintptr_t z_mrsh_k_thread_join(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg3;	/* unused */
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	union { uintptr_t x; struct k_thread * val; } parm0;
	parm0.x = arg0;
	union { struct { uintptr_t lo, hi; } split; k_timeout_t val; } parm1;
	parm1.split.lo = arg1;
	parm1.split.hi = arg2;
	int ret = z_vrfy_k_thread_join(parm0.val, parm1.val);
	_current->syscall_frame = NULL;
	return (uintptr_t) ret;
}

