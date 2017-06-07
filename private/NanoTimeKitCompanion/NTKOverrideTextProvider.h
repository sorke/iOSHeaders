//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKTextProvider.h>

@class NSString;

@interface NTKOverrideTextProvider : CLKTextProvider
{
    NSString *_text;
    CDUnknownBlockType _overrideBlock;
}

+ (id)_dashTrackingTextProviderWithDashes:(id)arg1 tracking:(double)arg2 weight:(double)arg3;
+ (id)_dashTrackingTextProviderWithDashes:(id)arg1 tracking:(double)arg2;
+ (id)textProviderWithText:(id)arg1 overrideBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType overrideBlock; // @synthesize overrideBlock=_overrideBlock;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;

@end
