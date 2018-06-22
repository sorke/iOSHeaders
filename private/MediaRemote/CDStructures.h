//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct NSMutableDictionary {
    Class _field1;
};

struct _MRHIDButtonEvent {
    unsigned int _field1;
    unsigned int _field2;
    _Bool _field3;
};

struct _MRHIDTouchEvent {
    union _MRHIDPoint _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned int _field4;
};

struct _MRTextInputTraits {
    unsigned int autocapitalizationType;
    unsigned int autocorrectionType;
    unsigned int spellcheckingType;
    unsigned int keyboardType;
    unsigned int returnKeyType;
    struct {
        long long location;
        long long length;
    } validTextRange;
    _Bool enablesReturnKeyAutomatically;
    _Bool secureTextEntry;
    long long PINEntrySeparatorIndexes[10];
    unsigned long long PINEntrySeparatorIndexesCount;
};

struct _MRTransactionKeyProtobuf {
    Class _field1;
    id _field2;
    id _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    float _field1[4];
} CDStruct_212a8bf9;

typedef struct {
    double *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_82f37d05;

typedef struct {
    int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_95bda58d;

typedef struct {
    double timestamp;
    double sampleRate;
} CDStruct_ace97b7a;

typedef struct {
    float width;
    float height;
} CDStruct_643d22a7;

// Ambiguous groups
typedef struct {
    unsigned int controllerID:1;
} CDStruct_669c4a63;

typedef struct {
    unsigned int state:1;
} CDStruct_5accba53;

typedef struct {
    unsigned int volume:1;
} CDStruct_731552e5;

#pragma mark Named Unions

union _MRHIDPoint {
    CDStruct_643d22a7 _field1;
    float _field2[2];
};

union _MRHIDSize {
    CDStruct_643d22a7 ;
    float data[2];
};

