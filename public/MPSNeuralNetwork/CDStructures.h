//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MPSNNGraph, NSData, NSNull;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct FilterGraphNode {
    CDUnknownFunctionPointerType *_field1;
    struct ResourceGraphNode *_field2;
    struct ResourceGraphNode *_field3;
    struct FilterGraphNode *_field4;
    struct NodeList<ResourceGraphNode *> _field5;
    struct NodeList<ResourceGraphNode *> _field6;
    struct NodeList<ResourceGraphNode *> _field7;
    union {
        id _field1;
        id _field2;
        id _field3;
    } _field8;
    id _field9;
    unsigned long long _field10;
    _Bool _field11;
};

struct Graph {
    struct NodeList<ResourceGraphNode *> _graphSourceImages;
    struct NodeList<ResourceGraphNode *> _graphSourceStates;
    struct ResourceGraphNode *_graphResultImage;
    struct NodeList<ResourceGraphNode *> _graphIntermediateImages;
    struct NodeList<ResourceGraphNode *> _graphResultStates;
    MPSNNGraph *_graph;
    struct NodeList<FilterGraphNode *> _filters;
    struct NodeList<ResourceGraphNode *> _images;
    struct NodeList<ResourceGraphNode *> _states;
    NSNull *_graphNull;
};

struct MPSAutoCache {
    id _field1;
    id _field2;
};

struct MPSDeviceSpecificInfo {
    struct MPSKernelInfo *_field1;
    CDUnknownFunctionPointerType _field2;
    unsigned long long _field3;
};

struct MPSImageInfo {
    id _field1;
    struct MPSPixelInfo *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
    id _field5;
    unsigned long long _field6;
};

struct MPSKernelInfo;

struct MPSLibraryInfo {
    int _field1;
    unsigned int _field2;
    char *_field3;
    struct MPSDeviceSpecificInfo _field4;
    struct MPSDeviceSpecificInfo _field5;
    struct MPSDeviceSpecificInfo _field6;
    struct MPSDeviceSpecificInfo _field7;
    struct MPSDeviceSpecificInfo _field8;
    struct MPSDeviceSpecificInfo _field9;
    struct MPSDeviceSpecificInfo _field10;
    struct MPSDeviceSpecificInfo _field11;
    struct MPSDeviceSpecificInfo _field12;
    struct MPSDeviceSpecificInfo _field13;
    struct MPSDeviceSpecificInfo _field14;
    struct MPSDeviceSpecificInfo _field15;
};

struct MPSOrigin {
    double _field1;
    double _field2;
    double _field3;
};

struct MPSPixelInfo;

struct MPSRegion {
    struct MPSOrigin _field1;
    struct MPSSize _field2;
};

struct MPSSize {
    double _field1;
    double _field2;
    double _field3;
};

struct NeuronInfo {
    int type;
    float a;
    float b;
    NSData *aData;
};

struct NodeList<FilterGraphNode *> {
    struct FilterGraphNode **_items;
    unsigned long long _count;
    unsigned long long _storageSize;
};

struct NodeList<ResourceGraphNode *> {
    struct ResourceGraphNode **_items;
    unsigned long long _count;
    unsigned long long _storageSize;
};

struct ResourceGraphNode {
    id _field1;
    struct NodeList<FilterGraphNode *> _field2;
    struct FilterGraphNode *_field3;
    id _field4;
    id _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    _Bool _field8;
    _Bool _field9;
    unsigned long long _field10;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long x;
    long long y;
    long long z;
} CDStruct_d6af7fc0;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    CDStruct_d6af7fc0 _field3;
    unsigned long long _field4;
} CDStruct_15cf940b;

typedef struct {
    struct {
        unsigned long long x;
        unsigned long long y;
        unsigned long long z;
    } origin;
    CDStruct_da2e99ad size;
} CDStruct_1e3be3a8;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDStruct_1e3be3a8 _field4;
} CDStruct_3d604284;

typedef struct {
    struct MPSImageInfo _field1;
    struct MPSImageInfo _field2;
    struct MPSImageInfo _field3;
    CDStruct_1e3be3a8 _field4;
    CDStruct_d6af7fc0 _field5;
    unsigned long long _field6;
} CDStruct_192e26fb;

typedef struct {
    struct MPSImageInfo _field1;
    struct MPSImageInfo _field2;
    struct MPSImageInfo _field3;
    struct MPSImageInfo _field4;
    CDStruct_1e3be3a8 _field5;
    CDStruct_d6af7fc0 _field6;
    CDStruct_d6af7fc0 _field7;
    unsigned long long _field8;
} CDStruct_7282e41a;

// Ambiguous groups
typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
} CDStruct_da2e99ad;
