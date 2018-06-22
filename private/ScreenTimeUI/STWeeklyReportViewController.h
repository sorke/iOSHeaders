//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray, STUsageReport;

@interface STWeeklyReportViewController : UITableViewController
{
    STUsageReport *_report;
    NSArray *_tableViewCells;
}

@property(retain, nonatomic) NSArray *tableViewCells; // @synthesize tableViewCells=_tableViewCells;
@property(readonly, nonatomic) STUsageReport *report; // @synthesize report=_report;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithUsageReport:(id)arg1;
- (id)initWithData:(id)arg1;

@end

