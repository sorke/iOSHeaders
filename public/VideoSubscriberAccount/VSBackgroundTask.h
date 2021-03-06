//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion, NSString;

@interface VSBackgroundTask : NSObject
{
    NSString *_name;
    id <VSBackgroundTaskDelegate> _delegate;
    BKSProcessAssertion *_assertion;
}

@property(retain, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property(nonatomic) __weak id <VSBackgroundTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)end;
- (_Bool)begin;
- (id)init;

@end

