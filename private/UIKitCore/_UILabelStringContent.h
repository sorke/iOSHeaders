//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UILabelContent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UILabelStringContent : _UILabelContent
{
    NSString *_string;
}

- (void).cxx_destruct;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (id)attributedString;
- (id)defaultValueForAttribute:(id)arg1;
- (id)valueForAttribute:(id)arg1 isUniform:(_Bool *)arg2;
- (id)string;
- (_Bool)isNil;
- (_Bool)isAttributed;
- (long long)length;
- (id)attributedStringContent;
- (id)initWithString:(id)arg1 defaultAttributesProvider:(CDUnknownBlockType)arg2;

@end

