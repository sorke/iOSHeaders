//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateView.h>

#import "SiriUITemplateView.h"

@class NSString, UIActivityIndicatorView, UILabel;

@interface SiriUIActivityIndicatorTemplateView : SiriUIBaseTemplateView <SiriUITemplateView>
{
    UILabel *_detailTextLabel;
    UIActivityIndicatorView *_spinnerView;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
- (void).cxx_destruct;
- (double)desiredHeight;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SiriUIActivityIndicatorTemplateModel> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <SiriUITemplatedView> templatedSuperview;

@end

