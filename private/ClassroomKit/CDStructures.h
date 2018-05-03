//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _ftsent {
    struct _ftsent *_field1;
    struct _ftsent *_field2;
    struct _ftsent *_field3;
    long long _field4;
    void *_field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned long long _field12;
    int _field13;
    unsigned short _field14;
    short _field15;
    unsigned short _field16;
    unsigned short _field17;
    unsigned short _field18;
    struct stat *_field19;
    char _field20[1];
};

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct _ftsent *_field1;
    struct _ftsent *_field2;
    struct _ftsent **_field3;
    int _field4;
    char *_field5;
    int _field6;
    int _field7;
    int _field8;
    union {
        CDUnknownFunctionPointerType _field1;
        CDUnknownBlockType _field2;
    } _field9;
    int _field10;
} CDStruct_2263269c;

