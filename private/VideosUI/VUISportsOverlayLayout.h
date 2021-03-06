//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VUIOverlayLayoutProtocol.h"

@class NSString, VUIImageLayout, VUIScoreboardLayout, VUITextBadgeLayout;

__attribute__((visibility("hidden")))
@interface VUISportsOverlayLayout : NSObject <VUIOverlayLayoutProtocol>
{
    VUIScoreboardLayout *_scoreboardLayout;
    VUITextBadgeLayout *_textBadgeLayout;
    VUITextBadgeLayout *_timeBadgeLayout;
    VUITextBadgeLayout *_liveBadgeLayout;
    VUIImageLayout *_logoImageLayout;
    struct UIEdgeInsets _padding;
}

+ (int)_textBlendMode;
+ (id)_textColorForTextBadge:(long long)arg1;
+ (id)_sportsOverlayCLayout;
+ (id)_sportsOverlayBLayout:(long long)arg1;
+ (id)_sportsOverlayALayout:(long long)arg1;
+ (id)overlayLayoutForScoreboardType:(long long)arg1 interfaceIdiom:(long long)arg2;
@property(retain, nonatomic) VUIImageLayout *logoImageLayout; // @synthesize logoImageLayout=_logoImageLayout;
@property(retain, nonatomic) VUITextBadgeLayout *liveBadgeLayout; // @synthesize liveBadgeLayout=_liveBadgeLayout;
@property(retain, nonatomic) VUITextBadgeLayout *timeBadgeLayout; // @synthesize timeBadgeLayout=_timeBadgeLayout;
@property(retain, nonatomic) VUITextBadgeLayout *textBadgeLayout; // @synthesize textBadgeLayout=_textBadgeLayout;
@property(retain, nonatomic) VUIScoreboardLayout *scoreboardLayout; // @synthesize scoreboardLayout=_scoreboardLayout;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

