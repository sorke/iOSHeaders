//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIBannerItem.h"

@class CPImageSet, NSArray, NSString, NSUUID;

@interface CPSBannerItem : SBUIBannerItem
{
    NSUUID *_identifier;
    NSString *_bundleIdentifier;
    NSArray *_textVariants;
    NSArray *_detailTextVariants;
    CPImageSet *_imageSet;
    id <CPBannerDelegate> _delegate;
}

@property(nonatomic) __weak id <CPBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CPImageSet *imageSet; // @synthesize imageSet=_imageSet;
@property(readonly, nonatomic) NSArray *detailTextVariants; // @synthesize detailTextVariants=_detailTextVariants;
@property(readonly, nonatomic) NSArray *textVariants; // @synthesize textVariants=_textVariants;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToBannerItem:(id)arg1;
- (CDUnknownBlockType)action;
- (_Bool)isSticky;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 textVariants:(id)arg3 detailTextVariants:(id)arg4 imageSet:(id)arg5 delegate:(id)arg6;

@end

