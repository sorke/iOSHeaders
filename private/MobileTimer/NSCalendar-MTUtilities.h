//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCalendar.h"

@interface NSCalendar (MTUtilities)
+ (id)_dateForInitial:(id)arg1 repeated:(id)arg2 backwards:(_Bool)arg3;
+ (unsigned long long)_optionsForBackwards:(_Bool)arg1;
+ (id)mtGregorianCalendar;
- (_Bool)mtDateRequiresSingularTimeString:(id)arg1;
- (id)_mtNextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 backwards:(_Bool)arg4;
- (id)mtPreviousDateBeforeDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;
- (id)mtNextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;
- (id)_mtNextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 backwards:(_Bool)arg3;
- (id)mtPreviousDateBeforeDate:(id)arg1 matchingComponents:(id)arg2;
- (id)mtNextDateAfterDate:(id)arg1 matchingComponents:(id)arg2;
@end

