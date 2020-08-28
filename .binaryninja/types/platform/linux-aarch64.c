#include "android.c"

#include <stdint.h>

typedef uint32_t u32;
#define __u32 u32
typedef int32_t s32;
#define __s32 s32
typedef uint64_t u64;

struct __aio_sigset;
struct __kernel_itimerspec;
struct __kernel_old_itimerval;
struct __kernel_old_timeval;
struct __kernel_timespec;
struct __kernel_timex;
struct clone_args;
struct epoll_event;
struct file_handle;
struct getcpu_cache;
struct io_event;
struct io_uring_params;
struct iocb;
struct iovec;
struct kexec_segment;
struct linux_dirent64;
struct mg_attr;
struct mmsghdr;
struct mq_attr;
struct msgbuf;
struct new_utsname;
struct old_itimerspec32;
struct old_timespec32;
struct old_timex32;
struct open_how;
struct perf_event_attr;
struct pollfd;
struct rlimit64;
struct rlimit;
struct rseq;
struct rusage;
struct sched_attr;
struct sched_param;
struct sembuf;
struct sigaction;
struct sigaltstack;
struct sigevent;
struct siginfo;
struct sockaddr;
struct stat64;
struct statx;
struct sysinfo;
struct timezone;
struct tms;
struct user_msghdr;

struct aio_context_t;
struct cap_user_data_t;
struct cap_user_header_t;
struct clockid_t;
struct fd_set;
struct gid_t;
struct key_serial_t;
struct key_t;
struct loff_t;
struct mqd_t;
struct pid_t;
struct qid_t;
struct rwf_t;
struct siginfo_t;
struct sigset_t;
struct timer_t;
struct uid_t;
struct umode_t;

union bpf_attr;

void __libc_init(void* raw_args, void (*onexit)(void), int (*main)(int argc, char** argv, char** envp), const void* structors) __noreturn;

void sys_restart_syscall() __syscall(0x80);
void sys_exit(int error_code) __noreturn __syscall(0x5d);
void sys_read(unsigned int fd, char* buf, size_t count) __syscall(0x3f);
void sys_write(unsigned int fd, const char* buf, size_t count) __syscall(0x40);
void sys_close(unsigned int fd) __syscall(0x39);
void sys_execve(const char* filename, const char* const* argv, const char* const* envp) __syscall(0xdd);
void sys_chdir(const char* filename) __syscall(0x31);
void sys_getpid() __syscall(0xac);
void sys_mount(char* dev_name, char* dir_name, char* type, unsigned long flags, void* data) __syscall(0x28);
void sys_ptrace(long request, long pid, unsigned long addr, unsigned long data) __syscall(0x75);
void sys_sync() __syscall(0x51);
void sys_kill(pid_t pid, int sig) __syscall(0x81);
void sys_dup(unsigned int fildes) __syscall(0x17);
void sys_times(struct tms* tbuf) __syscall(0x99);
void sys_brk(unsigned long brk) __syscall(0xd6);
void sys_acct(const char* name) __syscall(0x59);
void sys_umount(char* name, int flags) __syscall(0x27);
void sys_ioctl(unsigned int fd, unsigned int cmd, unsigned long arg) __syscall(0x1d);
void sys_setpgid(pid_t pid, pid_t pgid) __syscall(0x9a);
void sys_umask(int mask) __syscall(0xa6);
void sys_chroot(const char* filename) __syscall(0x33);
void sys_getppid() __syscall(0xad);
void sys_setsid() __syscall(0x9d);
void sys_sethostname(char* name, int len) __syscall(0xa1);
void sys_setrlimit(unsigned int resource, struct rlimit* rlim) __syscall(0xa4);
void sys_getrusage(int who, struct rusage* ru) __syscall(0xa5);
void sys_gettimeofday(struct __kernel_old_timeval* tv, struct timezone* tz) __syscall(0xa9);
void sys_settimeofday(struct __kernel_old_timeval* tv, struct timezone* tz) __syscall(0xaa);
void sys_swapon(const char* specialfile, int swap_flags) __syscall(0xe0);
void sys_reboot(int magic1, int magic2, unsigned int cmd, void* arg) __syscall(0x8e);
void sys_munmap(unsigned long addr, size_t len) __syscall(0xd7);
void sys_fchmod(unsigned int fd, umode_t mode) __syscall(0x34);
void sys_getpriority(int which, int who) __syscall(0x8d);
void sys_setpriority(int which, int who, int niceval) __syscall(0x8c);
void sys_syslog(int type, char* buf, int len) __syscall(0x74);
void sys_setitimer(int which, struct __kernel_old_itimerval* value, struct __kernel_old_itimerval* ovalue) __syscall(0x67);
void sys_getitimer(int which, struct __kernel_old_itimerval* value) __syscall(0x66);
void sys_vhangup() __syscall(0x3a);
void sys_wait4(pid_t pid, int* stat_addr, int options, struct rusage* ru) __syscall(0x104);
void sys_swapoff(const char* specialfile) __syscall(0xe1);
void sys_sysinfo(struct sysinfo* info) __syscall(0xb3);
void sys_fsync(unsigned int fd) __syscall(0x52);
void sys_clone(unsigned long, unsigned long, int, int*, int*, unsigned long) __syscall(0xdc);
void sys_setdomainname(char* name, int len) __syscall(0xa2);
void sys_newuname(struct new_utsname* name) __syscall(0xa0);
void sys_adjtimex_time32(struct old_timex32* txc_p) __syscall(0xab);
void sys_mprotect(unsigned long start, size_t len, unsigned long prot) __syscall(0xe2);
void sys_init_module(void* umod, unsigned long len, const char* uargs) __syscall(0x69);
void sys_delete_module(const char* name_user, unsigned int flags) __syscall(0x6a);
void sys_quotactl(unsigned int cmd, const char* special, qid_t id, void* addr) __syscall(0x3c);
void sys_getpgid(pid_t pid) __syscall(0x9b);
void sys_fchdir(unsigned int fd) __syscall(0x32);
void sys_personality(unsigned int personality) __syscall(0x5c);
void sys_llseek(unsigned int fd, unsigned long offset_high, unsigned long offset_low, loff_t* result, unsigned int whence) __syscall(0x3e);
void sys_flock(unsigned int fd, unsigned int cmd) __syscall(0x20);
void sys_msync(unsigned long start, size_t len, int flags) __syscall(0xe3);
void sys_readv(unsigned long fd, const struct iovec* vec, unsigned long vlen) __syscall(0x41);
void sys_writev(unsigned long fd, const struct iovec* vec, unsigned long vlen) __syscall(0x42);
void sys_getsid(pid_t pid) __syscall(0x9c);
void sys_fdatasync(unsigned int fd) __syscall(0x53);
void sys_mlock(unsigned long start, size_t len) __syscall(0xe4);
void sys_munlock(unsigned long start, size_t len) __syscall(0xe5);
void sys_mlockall(int flags) __syscall(0xe6);
void sys_munlockall() __syscall(0xe7);
void sys_sched_setparam(pid_t pid, struct sched_param* param) __syscall(0x76);
void sys_sched_getparam(pid_t pid, struct sched_param* param) __syscall(0x79);
void sys_sched_setscheduler(pid_t pid, int policy, struct sched_param* param) __syscall(0x77);
void sys_sched_getscheduler(pid_t pid) __syscall(0x78);
void sys_sched_yield() __syscall(0x7c);
void sys_sched_get_priority_max(int policy) __syscall(0x7d);
void sys_sched_get_priority_min(int policy) __syscall(0x7e);
void sys_nanosleep_time32(struct old_timespec32* rqtp, struct old_timespec32* rmtp) __syscall(0x65);
void sys_mremap(unsigned long addr, unsigned long old_len, unsigned long new_len, unsigned long flags, unsigned long new_addr) __syscall(0xd8);
void sys_prctl(int option, unsigned long arg2, unsigned long arg3, unsigned long arg4, unsigned long arg5) __syscall(0xa7);
void sys_rt_sigaction(int, const struct sigaction*, struct sigaction*, size_t) __syscall(0x86);
void sys_rt_sigprocmask(int how, sigset_t* set, sigset_t* oset, size_t sigsetsize) __syscall(0x87);
void sys_rt_sigpending(sigset_t* set, size_t sigsetsize) __syscall(0x88);
void sys_rt_sigsuspend(sigset_t* unewset, size_t sigsetsize) __syscall(0x85);
void sys_pread64(unsigned int fd, char* buf, size_t count, loff_t pos) __syscall(0x43);
void sys_pwrite64(unsigned int fd, const char* buf, size_t count, loff_t pos) __syscall(0x44);
void sys_getcwd(char* buf, unsigned long size) __syscall(0x11);
void sys_capget(cap_user_header_t header, cap_user_data_t dataptr) __syscall(0x5a);
void sys_capset(cap_user_header_t header, const cap_user_data_t data) __syscall(0x5b);
void sys_sigaltstack(const struct sigaltstack* uss, struct sigaltstack* uoss) __syscall(0x84);
void sys_getrlimit(unsigned int resource, struct rlimit* rlim) __syscall(0xa3);
void sys_fstat64(unsigned long fd, struct stat64* statbuf) __syscall(0x50);
void sys_getuid() __syscall(0xae);
void sys_getgid() __syscall(0xb0);
void sys_geteuid() __syscall(0xaf);
void sys_getegid() __syscall(0xb1);
void sys_setreuid(uid_t ruid, uid_t euid) __syscall(0x91);
void sys_setregid(gid_t rgid, gid_t egid) __syscall(0x8f);
void sys_getgroups(int gidsetsize, gid_t* grouplist) __syscall(0x9e);
void sys_setgroups(int gidsetsize, gid_t* grouplist) __syscall(0x9f);
void sys_fchown(unsigned int fd, uid_t user, gid_t group) __syscall(0x37);
void sys_setresuid(uid_t ruid, uid_t euid, uid_t suid) __syscall(0x93);
void sys_getresuid(uid_t* ruid, uid_t* euid, uid_t* suid) __syscall(0x94);
void sys_setresgid(gid_t rgid, gid_t egid, gid_t sgid) __syscall(0x95);
void sys_getresgid(gid_t* rgid, gid_t* egid, gid_t* sgid) __syscall(0x96);
void sys_setuid(uid_t uid) __syscall(0x92);
void sys_setgid(gid_t gid) __syscall(0x90);
void sys_setfsuid(uid_t uid) __syscall(0x97);
void sys_setfsgid(gid_t gid) __syscall(0x98);
void sys_getdents64(unsigned int fd, struct linux_dirent64* dirent, unsigned int count) __syscall(0x3d);
void sys_pivot_root(const char* new_root, const char* put_old) __syscall(0x29);
void sys_mincore(unsigned long start, size_t len, unsigned char* vec) __syscall(0xe8);
void sys_madvise(unsigned long start, size_t len, int behavior) __syscall(0xe9);
void sys_gettid() __syscall(0xb2);
void sys_readahead(int fd, loff_t offset, size_t count) __syscall(0xd5);
void sys_setxattr(const char* path, const char* name, const void* value, size_t size, int flags) __syscall(0x5);
void sys_lsetxattr(const char* path, const char* name, const void* value, size_t size, int flags) __syscall(0x6);
void sys_fsetxattr(int fd, const char* name, const void* value, size_t size, int flags) __syscall(0x7);
void sys_getxattr(const char* path, const char* name, void* value, size_t size) __syscall(0x8);
void sys_lgetxattr(const char* path, const char* name, void* value, size_t size) __syscall(0x9);
void sys_fgetxattr(int fd, const char* name, void* value, size_t size) __syscall(0xa);
void sys_listxattr(const char* path, char* list, size_t size) __syscall(0xb);
void sys_llistxattr(const char* path, char* list, size_t size) __syscall(0xc);
void sys_flistxattr(int fd, char* list, size_t size) __syscall(0xd);
void sys_removexattr(const char* path, const char* name) __syscall(0xe);
void sys_lremovexattr(const char* path, const char* name) __syscall(0xf);
void sys_fremovexattr(int fd, const char* name) __syscall(0x10);
void sys_tkill(pid_t pid, int sig) __syscall(0x82);
void sys_sendfile64(int out_fd, int in_fd, loff_t* offset, size_t count) __syscall(0x47);
void sys_futex_time32(u32* uaddr, int op, u32 val, struct old_timespec32* utime, u32* uaddr2, u32 val3) __syscall(0x62);
void sys_io_setup(unsigned int nr_reqs, aio_context_t* ctx) __syscall(0x0);
void sys_io_destroy(aio_context_t ctx) __syscall(0x1);
void sys_io_getevents_time32(__u32 ctx_id, __s32 min_nr, __s32 nr, struct io_event* events, struct old_timespec32* timeout) __syscall(0x4);
void sys_io_submit(aio_context_t, long, struct iocb**) __syscall(0x2);
void sys_io_cancel(aio_context_t ctx_id, struct iocb* iocb, struct io_event* result) __syscall(0x3);
void sys_exit_group(int error_code) __noreturn __syscall(0x5e);
void sys_lookup_dcookie(u64 cookie64, char* buf, size_t len) __syscall(0x12);
void sys_epoll_ctl(int epfd, int op, int fd, struct epoll_event* event) __syscall(0x15);
void sys_remap_file_pages(unsigned long start, unsigned long size, unsigned long prot, unsigned long pgoff, unsigned long flags) __syscall(0xea);
void sys_set_tid_address(int* tidptr) __syscall(0x60);
void sys_timer_create(clockid_t which_clock, struct sigevent* timer_event_spec, timer_t* created_timer_id) __syscall(0x6b);
void sys_timer_settime32(timer_t timer_id, int flags, struct old_itimerspec32* new, struct old_itimerspec32* old) __syscall(0x6e);
void sys_timer_gettime32(timer_t timer_id, struct old_itimerspec32* setting) __syscall(0x6c);
void sys_timer_getoverrun(timer_t timer_id) __syscall(0x6d);
void sys_timer_delete(timer_t timer_id) __syscall(0x6f);
void sys_clock_settime32(clockid_t which_clock, struct old_timespec32* tp) __syscall(0x70);
void sys_clock_gettime32(clockid_t which_clock, struct old_timespec32* tp) __syscall(0x71);
void sys_clock_getres_time32(clockid_t which_clock, struct old_timespec32* tp) __syscall(0x72);
void sys_tgkill(pid_t tgid, pid_t pid, int sig) __syscall(0x83);
void sys_mq_open(const char* name, int oflag, umode_t mode, struct mq_attr* attr) __syscall(0xb4);
void sys_mq_unlink(const char* name) __syscall(0xb5);
void sys_mq_timedsend_time32(mqd_t mqdes, const char* u_msg_ptr, unsigned int msg_len, unsigned int msg_prio, const struct old_timespec32* u_abs_timeout) __syscall(0xb6);
void sys_mq_notify(mqd_t mqdes, const struct sigevent* notification) __syscall(0xb8);
void sys_mq_getsetattr(mqd_t mqdes, const struct mq_attr* mqstat, struct mq_attr* omqstat) __syscall(0xb9);
void sys_waitid(int which, pid_t pid, struct siginfo* infop, int options, struct rusage* ru) __syscall(0x5f);
void sys_socket(int, int, int) __syscall(0xc6);
void sys_bind(int, struct sockaddr*, int) __syscall(0xc8);
void sys_connect(int, struct sockaddr*, int) __syscall(0xcb);
void sys_listen(int, int) __syscall(0xc9);
void sys_accept(int, struct sockaddr*, int*) __syscall(0xca);
void sys_getsockname(int, struct sockaddr*, int*) __syscall(0xcc);
void sys_getpeername(int, struct sockaddr*, int*) __syscall(0xcd);
void sys_socketpair(int, int, int, int*) __syscall(0xc7);
void sys_sendto(int, void*, size_t, unsigned int, struct sockaddr*, int) __syscall(0xce);
void sys_recvfrom(int, void*, size_t, unsigned int, struct sockaddr*, int*) __syscall(0xcf);
void sys_shutdown(int, int) __syscall(0xd2);
void sys_setsockopt(int fd, int level, int optname, char* optval, int optlen) __syscall(0xd0);
void sys_getsockopt(int fd, int level, int optname, char* optval, int* optlen) __syscall(0xd1);
void sys_sendmsg(int fd, struct user_msghdr* msg, unsigned int flags) __syscall(0xd3);
void sys_recvmsg(int fd, struct user_msghdr* msg, unsigned int flags) __syscall(0xd4);
void sys_semop(int semid, struct sembuf* sops, unsigned int nsops) __syscall(0xc1);
void sys_semget(key_t key, int nsems, int semflg) __syscall(0xbe);
void sys_msgsnd(int msqid, struct msgbuf* msgp, size_t msgsz, int msgflg) __syscall(0xbd);
void sys_msgrcv(int msqid, struct msgbuf* msgp, size_t msgsz, long msgtyp, int msgflg) __syscall(0xbc);
void sys_msgget(key_t key, int msgflg) __syscall(0xba);
void sys_shmat(int shmid, char* shmaddr, int shmflg) __syscall(0xc4);
void sys_shmdt(char* shmaddr) __syscall(0xc5);
void sys_shmget(key_t key, size_t size, int flag) __syscall(0xc2);
void sys_add_key(const char* _type, const char* _description, const void* _payload, size_t plen, key_serial_t destringid) __syscall(0xd9);
void sys_request_key(const char* _type, const char* _description, const char* _callout_info, key_serial_t destringid) __syscall(0xda);
void sys_keyctl(int cmd, unsigned long arg2, unsigned long arg3, unsigned long arg4, unsigned long arg5) __syscall(0xdb);
void sys_semtimedop_time32(int semid, struct sembuf* sops, unsigned int nsops, const struct old_timespec32* timeout) __syscall(0xc0);
void sys_ioprio_set(int which, int who, int ioprio) __syscall(0x1e);
void sys_ioprio_get(int which, int who) __syscall(0x1f);
void sys_inotify_add_watch(int fd, const char* path, u32 mask) __syscall(0x1b);
void sys_inotify_rm_watch(int fd, __s32 wd) __syscall(0x1c);
void sys_mbind(unsigned long start, unsigned long len, unsigned long mode, const unsigned long* nmask, unsigned long maxnode, unsigned int flags) __syscall(0xeb);
void sys_get_mempolicy(int* policy, unsigned long* nmask, unsigned long maxnode, unsigned long addr, unsigned long flags) __syscall(0xec);
void sys_set_mempolicy(int mode, const unsigned long* nmask, unsigned long maxnode) __syscall(0xed);
void sys_openat(int dfd, const char* filename, int flags, umode_t mode) __syscall(0x38);
void sys_mkdirat(int dfd, const char* pathname, umode_t mode) __syscall(0x22);
void sys_mknodat(int dfd, const char* filename, umode_t mode, unsigned int dev) __syscall(0x21);
void sys_fchownat(int dfd, const char* filename, uid_t user, gid_t group, int flag) __syscall(0x36);
void sys_fstatat64(int dfd, const char* filename, struct stat64* statbuf, int flag) __syscall(0x4f);
void sys_unlinkat(int dfd, const char* pathname, int flag) __syscall(0x23);
void sys_renameat(int olddfd, const char* oldname, int newdfd, const char* newname) __syscall(0x26);
void sys_linkat(int olddfd, const char* oldname, int newdfd, const char* newname, int flags) __syscall(0x25);
void sys_symlinkat(const char* oldname, int newdfd, const char* newname) __syscall(0x24);
void sys_readlinkat(int dfd, const char* path, char* buf, int bufsiz) __syscall(0x4e);
void sys_fchmodat(int dfd, const char* filename, umode_t mode) __syscall(0x35);
void sys_faccessat(int dfd, const char* filename, int mode) __syscall(0x30);
void sys_unshare(unsigned long unshare_flags) __syscall(0x61);
void sys_splice(int fd_in, loff_t* off_in, int fd_out, loff_t* off_out, size_t len, unsigned int flags) __syscall(0x4c);
void sys_tee(int fdin, int fdout, size_t len, unsigned int flags) __syscall(0x4d);
void sys_vmsplice(int fd, const struct iovec* iov, unsigned long nr_segs, unsigned int flags) __syscall(0x4b);
void sys_move_pages(pid_t pid, unsigned long nr_pages, const void** pages, const int* nodes, int* status, int flags) __syscall(0xef);
void sys_getcpu(unsigned int* cpu, unsigned int* node, struct getcpu_cache* cache) __syscall(0xa8);
void sys_epoll_pwait(int epfd, struct epoll_event* events, int maxevents, int timeout, const sigset_t* sigmask, size_t sigsetsize) __syscall(0x16);
void sys_kexec_load(unsigned long entry, unsigned long nr_segments, struct kexec_segment* segments, unsigned long flags) __syscall(0x68);
void sys_utimensat_time32(unsigned int dfd, const char* filename, struct old_timespec32* t, int flags) __syscall(0x58);
void sys_timerfd_create(int clockid, int flags) __syscall(0x55);
void sys_fallocate(int fd, int mode, loff_t offset, loff_t len) __syscall(0x2f);
void sys_signalfd4(int ufd, sigset_t* user_mask, size_t sizemask, int flags) __syscall(0x4a);
void sys_eventfd2(unsigned int count, int flags) __syscall(0x13);
void sys_epoll_create1(int flags) __syscall(0x14);
void sys_dup3(unsigned int oldfd, unsigned int newfd, int flags) __syscall(0x18);
void sys_pipe2(int* fildes, int flags) __syscall(0x3b);
void sys_inotify_init1(int flags) __syscall(0x1a);
void sys_preadv(unsigned long fd, const struct iovec* vec, unsigned long vlen, unsigned long pos_l, unsigned long pos_h) __syscall(0x45);
void sys_pwritev(unsigned long fd, const struct iovec* vec, unsigned long vlen, unsigned long pos_l, unsigned long pos_h) __syscall(0x46);
void sys_perf_event_open(struct perf_event_attr* attr_uptr, pid_t pid, int cpu, int group_fd, unsigned long flags) __syscall(0xf1);
void sys_accept4(int, struct sockaddr*, int*, int) __syscall(0xf2);
void sys_fanotify_init(unsigned int flags, unsigned int event_f_flags) __syscall(0x106);
void sys_fanotify_mark(int fanotify_fd, unsigned int flags, u64 mask, int fd, const char* pathname) __syscall(0x107);
void sys_prlimit64(pid_t pid, unsigned int resource, const struct rlimit64* new_rlim, struct rlimit64* old_rlim) __syscall(0x105);
void sys_name_to_handle_at(int dfd, const char* name, struct file_handle* handle, int* mnt_id, int flag) __syscall(0x108);
void sys_open_by_handle_at(int mountdirfd, struct file_handle* handle, int flags) __syscall(0x109);
void sys_clock_adjtime32(clockid_t which_clock, struct old_timex32* tx) __syscall(0x10a);
void sys_syncfs(int fd) __syscall(0x10b);
void sys_sendmmsg(int fd, struct mmsghdr* msg, unsigned int vlen, unsigned int flags) __syscall(0x10d);
void sys_setns(int fd, int nstype) __syscall(0x10c);
void sys_kcmp(pid_t pid1, pid_t pid2, int type, unsigned long idx1, unsigned long idx2) __syscall(0x110);
void sys_finit_module(int fd, const char* uargs, int flags) __syscall(0x111);
void sys_sched_setattr(pid_t pid, struct sched_attr* attr, unsigned int flags) __syscall(0x112);
void sys_sched_getattr(pid_t pid, struct sched_attr* attr, unsigned int size, unsigned int flags) __syscall(0x113);
void sys_renameat2(int olddfd, const char* oldname, int newdfd, const char* newname, unsigned int flags) __syscall(0x114);
void sys_seccomp(unsigned int op, unsigned int flags, void* uargs) __syscall(0x115);
void sys_getrandom(char* buf, size_t count, unsigned int flags) __syscall(0x116);
void sys_memfd_create(const char* uname_ptr, unsigned int flags) __syscall(0x117);
void sys_bpf(int cmd, union bpf_attr * attr, unsigned int size) __syscall(0x118);
void sys_execveat(int dfd, const char* filename, const char* const* argv, const char* const* envp, int flags) __syscall(0x119);
void sys_userfaultfd(int flags) __syscall(0x11a);
void sys_membarrier(int cmd, int flags) __syscall(0x11b);
void sys_mlock2(unsigned long start, size_t len, int flags) __syscall(0x11c);
void sys_copy_file_range(int fd_in, loff_t* off_in, int fd_out, loff_t* off_out, size_t len, unsigned int flags) __syscall(0x11d);
void sys_preadv2(unsigned long fd, const struct iovec* vec, unsigned long vlen, unsigned long pos_l, unsigned long pos_h, rwf_t flags) __syscall(0x11e);
void sys_pwritev2(unsigned long fd, const struct iovec* vec, unsigned long vlen, unsigned long pos_l, unsigned long pos_h, rwf_t flags) __syscall(0x11f);
void sys_pkey_mprotect(unsigned long start, size_t len, unsigned long prot, int pkey) __syscall(0x120);
void sys_pkey_alloc(unsigned long flags, unsigned long init_val) __syscall(0x121);
void sys_pkey_free(int pkey) __syscall(0x122);
void sys_statx(int dfd, const char* path, unsigned int flags, unsigned int mask, struct statx* buffer) __syscall(0x123);
void sys_rseq(struct rseq* rseq, uint32_t rseq_len, int flags, uint32_t sig) __syscall(0x125);
void sys_migrate_pages(pid_t pid, unsigned long maxnode, const unsigned long* from, const unsigned long* to) __syscall(0xee);
void sys_kexec_file_load(int kernel_fd, int initrd_fd, unsigned long cmdline_len, const char* cmdline_ptr, unsigned long flags) __syscall(0x126);
void sys_clock_gettime(clockid_t which_clock, struct __kernel_timespec* tp) __syscall(0x193);
void sys_clock_settime(clockid_t which_clock, const struct __kernel_timespec* tp) __syscall(0x194);
void sys_clock_adjtime(clockid_t which_clock, struct __kernel_timex* tx) __syscall(0x195);
void sys_clock_getres(clockid_t which_clock, struct __kernel_timespec* tp) __syscall(0x196);
void sys_clock_nanosleep(clockid_t which_clock, int flags, const struct __kernel_timespec* rqtp, struct __kernel_timespec* rmtp) __syscall(0x197);
void sys_timer_gettime(timer_t timer_id, struct __kernel_itimerspec* setting) __syscall(0x198);
void sys_timer_settime(timer_t timer_id, int flags, const struct __kernel_itimerspec* new_setting, struct __kernel_itimerspec* old_setting) __syscall(0x199);
void sys_timerfd_gettime(int ufd, struct __kernel_itimerspec* otmr) __syscall(0x19a);
void sys_timerfd_settime(int ufd, int flags, const struct __kernel_itimerspec* utmr, struct __kernel_itimerspec* otmr) __syscall(0x19b);
void sys_utimensat(int dfd, const char* filename, struct __kernel_timespec* utimes, int flags) __syscall(0x19c);
void sys_pselect6(int, fd_set*, fd_set*, fd_set*, struct __kernel_timespec*, void*) __syscall(0x19d);
void sys_ppoll(struct pollfd*, unsigned int, struct __kernel_timespec*, const sigset_t*, size_t) __syscall(0x19e);
void sys_io_pgetevents(aio_context_t ctx_id, long min_nr, long nr, struct io_event* events, struct __kernel_timespec* timeout, const struct __aio_sigset * sig) __syscall(0x1a0);
void sys_recvmmsg(int fd, struct mmsghdr* msg, unsigned int vlen, unsigned int flags, struct __kernel_timespec* timeout) __syscall(0x1a1);
void sys_mq_timedsend(mqd_t mqdes, const char* msg_ptr, size_t msg_len, unsigned int msg_prio, const struct __kernel_timespec* abs_timeout) __syscall(0x1a2);
void sys_mq_timedreceive(mqd_t mqdes, char* msg_ptr, size_t msg_len, unsigned int* msg_prio, const struct __kernel_timespec* abs_timeout) __syscall(0x1a3);
void sys_semtimedop(int semid, struct sembuf* sops, unsigned int nsops, const struct __kernel_timespec* timeout) __syscall(0x1a4);
void sys_rt_sigtimedwait(const sigset_t* uthese, siginfo_t* uinfo, const struct __kernel_timespec* uts, size_t sigsetsize) __syscall(0x1a5);
void sys_futex(u32* uaddr, int op, u32 val, struct __kernel_timespec* utime, u32* uaddr2, u32 val3) __syscall(0x1a6);
void sys_sched_rr_get_interval(pid_t pid, struct __kernel_timespec* interval) __syscall(0x1a7);
void sys_pidfd_send_signal(int pidfd, int sig, siginfo_t* info, unsigned int flags) __syscall(0x1a8);
void sys_io_uring_setup(u32 entries, struct io_uring_params* p) __syscall(0x1a9);
void sys_io_uring_enter(unsigned int fd, u32 to_submit, u32 min_complete, u32 flags, const sigset_t* sig, size_t sigsz) __syscall(0x1aa);
void sys_io_uring_register(unsigned int fd, unsigned int op, void* arg, unsigned int nr_args) __syscall(0x1ab);
void sys_open_tree(int dfd, const char* path, unsigned int flags) __syscall(0x1ac);
void sys_move_mount(int from_dfd, const char* from_path, int to_dfd, const char* to_path, unsigned int ms_flags) __syscall(0x1ad);
void sys_fsopen(const char* fs_name, unsigned int flags) __syscall(0x1ae);
void sys_fsconfig(int fs_fd, unsigned int cmd, const char* key, const void* value, int aux) __syscall(0x1af);
void sys_fsmount(int fs_fd, unsigned int flags, unsigned int ms_flags) __syscall(0x1b0);
void sys_fspick(int dfd, const char* path, unsigned int flags) __syscall(0x1b1);
void sys_pidfd_open(pid_t pid, unsigned int flags) __syscall(0x1b2);
void sys_clone3(struct clone_args* uargs, size_t size) __syscall(0x1b3);
void sys_openat2(int dfd, const char* filename, struct open_how * how, size_t size) __syscall(0x1b5);
void sys_pidfd_getfd(int pidfd, int fd, unsigned int flags) __syscall(0x1b6);
void sys_faccessat2(int dfd, const char* filename, int mode, int flags) __syscall(0x1b7);
