//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableDictionary, NSString;

@interface OKPresentationFeeder : OKPresentationCanvas
{
    NSString *_className;
    NSMutableDictionary *_internalSettings;
}

+ (id)feederWithName:(id)arg1 className:(id)arg2 settings:(id)arg3;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void)resolveIfNeeded;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3;
- (id)init;

@end
