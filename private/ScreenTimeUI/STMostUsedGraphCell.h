//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTableCell.h"

@class STUsageGraphView, UILabel;

@interface STMostUsedGraphCell : PSTableCell
{
    UILabel *_screenTimeLabel;
    STUsageGraphView *_usageGraphView;
}

@property(readonly, nonatomic) STUsageGraphView *usageGraphView; // @synthesize usageGraphView=_usageGraphView;
@property(readonly, nonatomic) UILabel *screenTimeLabel; // @synthesize screenTimeLabel=_screenTimeLabel;
- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (_Bool)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

