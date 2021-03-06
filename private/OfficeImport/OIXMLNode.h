//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLNode : NSObject <NSCopying>
{
}

+ (void)_escapeCharacters:(const unsigned short *)arg1 amount:(unsigned int)arg2 escapeWhiteSpaces:(_Bool)arg3 inString:(id)arg4 appendingToString:(struct __CFString *)arg5;
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(struct __CFString *)arg3;
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;
@property(readonly) NSString *closingTagString;
@property(readonly) NSString *contentString;
@property(readonly) NSString *openingTagString;
@property(readonly) NSString *XMLString;
- (id)description;
@property(retain) NSString *stringValue; // @dynamic stringValue;
@property(readonly) NSString *name; // @dynamic name;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

