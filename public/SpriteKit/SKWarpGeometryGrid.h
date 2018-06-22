//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKWarpGeometry.h>

#import "NSSecureCoding.h"

@interface SKWarpGeometryGrid : SKWarpGeometry <NSSecureCoding>
{
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _sourcePositions;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _destPositions;
    // Error parsing type: , name: _dimensions
    int _vertexCount;
    _Bool _isIdentityWarp;
}

+     // Error parsing type: @48@0:8q16q24r^32r^40, name: gridWithColumns:rows:sourcePositions:destPositions:
+ (id)gridWithColumns:(long long)arg1 rows:(long long)arg2;
+ (id)grid;
+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
-     // Error parsing type: @24@0:8r^16, name: gridByReplacingDestPositions:
-     // Error parsing type: @24@0:8r^16, name: gridByReplacingSourcePositions:
// Error parsing type for property destPositions:
// Property attributes: Tr^,R,N

// Error parsing type for property sourcePositions:
// Property attributes: Tr^,R,N

@property(readonly, nonatomic) long long numberOfColumns;
@property(readonly, nonatomic) long long numberOfRows;
-     // Error parsing type: 24@0:8q16, name: destPositionAtIndex:
-     // Error parsing type: 24@0:8q16, name: sourcePositionAtIndex:
@property(readonly, nonatomic) long long vertexCount;
- (_Bool)isIdentityWarp;
- (_Bool)isEqualToGrid:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
-     // Error parsing type: @48@0:8q16q24r^32r^40, name: initWithColumns:rows:sourcePositions:destPositions:
- (id)init;

@end

