//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol _SFFindOnPageToolbarDelegate
- (NSString *)longMatchLabelText;
- (NSString *)matchLabelText;
- (_Bool)hasMatches;
- (void)updateSearchText:(NSString *)arg1;
- (void)done;
- (void)next;
- (void)previous;
- (NSString *)textForToolbarLabel;
@end

