//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPathElement {
    int _field1;
    struct CGPoint *_field2;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct CharacterPoseSpecs {
    float bodyOffsetX;
    float footOffsetX;
    float headOffsetX;
};

struct CharacterStateSpecs {
    unsigned int bodyTexIdx;
    unsigned int minuteTexIdx;
    unsigned int hourArmOnLeftShoulder;
    float xFlipBody;
    float xFlipFoot;
    float xFlipFace;
    float xFlipMinuteHand;
    float xFlipHourHand;
    float leftShoulderX;
    float rightShoulderX;
    float minuteElbowBend;
    float hourElbowBend;
};

struct NSArray {
    Class _field1;
};

struct NSNumber {
    Class _field1;
};

struct NSString {
    Class _field1;
};

struct NTKAstronomyFaceViewAnimationPose {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
};

struct NTKAstronomyInteractionSettings {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct NTKCharacterPrograms {
    struct NUProgram programs[6];
};

struct NTKKaleidoscopePathfinderPoint {
    double _field1[4];
};

struct NTKLabelPosition {
    struct CGPoint _field1;
    long long _field2;
    long long _field3;
};

struct NUProgram {
    unsigned int program;
    int uniforms[13];
};

struct RingLayout {
    double bottomEdgeInset;
    double leftEdgeInset;
    double diameter;
    double thickness;
    double interspacing;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NTKCompanion1stPartyInfo {
    id _field1;
    id _field2;
    unsigned long long _field3;
    id _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool isComplexBackground;
    _Bool isColoredText;
    float textHue;
    float textSaturation;
    float textBrightness;
    float bgHue;
    float bgSaturation;
    float bgBrightness;
    float shadowHue;
    float shadowSaturation;
    float shadowBrightness;
} CDStruct_77693742;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
} CDStruct_869f9c67;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    struct UIEdgeInsets _field13;
} CDStruct_69ceb9b6;

#pragma mark Named Unions

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};

union _GLKVector2 {
    struct {
        float x;
        float y;
    } ;
    struct {
        float s;
        float t;
    } ;
    float v[2];
};

union _GLKVector3 {
    CDStruct_869f9c67 _field1;
    CDStruct_869f9c67 _field2;
    CDStruct_869f9c67 _field3;
    float _field4[3];
};

