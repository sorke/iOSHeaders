//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMAssociatedMessageChatItem.h>

@interface IMMessageAcknowledgmentChatItem : IMAssociatedMessageChatItem
{
    long long _messageAcknowledgmentType;
}

@property(readonly, nonatomic) long long messageAcknowledgmentType; // @synthesize messageAcknowledgmentType=_messageAcknowledgmentType;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 messageAcknowledgmentType:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
