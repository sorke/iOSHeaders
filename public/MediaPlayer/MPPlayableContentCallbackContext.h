//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath;

@interface MPPlayableContentCallbackContext : NSObject
{
    _Bool _serviced;
    NSIndexPath *_indexPath;
}

@property(nonatomic) _Bool serviced; // @synthesize serviced=_serviced;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)initWithIndexPath:(id)arg1;

@end
