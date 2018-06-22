//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIView, VUIProductMetadataLayout;

__attribute__((visibility("hidden")))
@interface VUIProductSectionInfoViewModel : NSObject
{
    UIView *_headerView;
    NSArray *_dataViews;
    VUIProductMetadataLayout *_layout;
}

+ (id)dataDescriptionViewWithString:(id)arg1 maxLine:(unsigned long long)arg2 layout:(id)arg3 existingView:(id)arg4;
+ (id)dataLabelViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithImage:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
@property(retain, nonatomic) VUIProductMetadataLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSArray *dataViews; // @synthesize dataViews=_dataViews;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;

@end

