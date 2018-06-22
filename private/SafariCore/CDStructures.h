//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct RawData {
    _Bool _field1;
    void *_field2;
    int _field3;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _malloc_zone_t {
    void *_field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    char *_field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct malloc_introspection_t *_field13;
    unsigned int _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
};

struct malloc_introspection_t;

struct malloc_statistics_t {
    unsigned int blocks_in_use;
    unsigned long long size_in_use;
    unsigned long long max_size_in_use;
    unsigned long long size_allocated;
};

struct task_vm_info {
    unsigned long long virtual_size;
    int region_count;
    int page_size;
    unsigned long long resident_size;
    unsigned long long resident_size_peak;
    unsigned long long device;
    unsigned long long device_peak;
    unsigned long long internal;
    unsigned long long internal_peak;
    unsigned long long external;
    unsigned long long external_peak;
    unsigned long long reusable;
    unsigned long long reusable_peak;
    unsigned long long purgeable_volatile_pmap;
    unsigned long long purgeable_volatile_resident;
    unsigned long long purgeable_volatile_virtual;
    unsigned long long compressed;
    unsigned long long compressed_peak;
    unsigned long long compressed_lifetime;
    unsigned long long phys_footprint;
    unsigned long long min_address;
    unsigned long long max_address;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int timestamp:1;
} CDStruct_b5306035;

// Ambiguous groups
typedef struct {
    unsigned int timestamp:1;
    unsigned int button:1;
    unsigned int usedLongTap:1;
} CDStruct_9b2e609f;

typedef struct {
    unsigned int timestamp:1;
    unsigned int category:1;
    unsigned int formProperty:1;
} CDStruct_18b2ecd0;

typedef struct {
    unsigned int timestamp:1;
    unsigned int action:1;
} CDStruct_399b966a;

typedef struct {
    unsigned int timestamp:1;
    unsigned int method:1;
} CDStruct_64f0786c;

