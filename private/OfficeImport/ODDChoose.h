//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray, ODDOtherwise;

__attribute__((visibility("hidden")))
@interface ODDChoose : ODDLayoutObject
{
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}

- (id)description;
- (void)setOtherwise:(id)arg1;
- (id)otherwise;
- (void)addWhen:(id)arg1;
- (id)whens;
- (void)dealloc;
- (id)init;

@end
