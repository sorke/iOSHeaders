//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UIContentSizeCategoryPreference : NSObject
{
    NSString *_preferredContentSizeCategory;
}

+ (id)system;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 forBlock:(CDUnknownBlockType)arg2;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1;
+ (void)_resetSystemPreferenceOverride;
@property(retain, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
- (void).cxx_destruct;
- (void)checkForChanges;
- (id)init;
- (id)initWithContentSizeCategory:(id)arg1;

@end

