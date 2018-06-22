//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ICDocCamImageQuad, NSData, NSDictionary, NSString;

@interface ICDocCamDocumentInfo : NSObject <NSSecureCoding>
{
    short _currentFilter;
    NSDictionary *_metaData;
    ICDocCamImageQuad *_imageQuad;
    NSString *_croppedAndFilteredImageUUID;
    NSString *_croppedButNotFilteredImageUUID;
    NSString *_fullImageUUID;
    NSString *_meshAnimImageUUID;
    long long _currentOrientation;
    NSString *_scanDataDelegateIdentifier;
    NSData *_markupModelData;
    id <ICDocCamViewControllerDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
@property __weak id <ICDocCamViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *markupModelData; // @synthesize markupModelData=_markupModelData;
@property(retain, nonatomic) NSString *scanDataDelegateIdentifier; // @synthesize scanDataDelegateIdentifier=_scanDataDelegateIdentifier;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) short currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) NSString *meshAnimImageUUID; // @synthesize meshAnimImageUUID=_meshAnimImageUUID;
@property(retain, nonatomic) NSString *fullImageUUID; // @synthesize fullImageUUID=_fullImageUUID;
@property(retain, nonatomic) NSString *croppedButNotFilteredImageUUID; // @synthesize croppedButNotFilteredImageUUID=_croppedButNotFilteredImageUUID;
@property(retain, nonatomic) NSString *croppedAndFilteredImageUUID; // @synthesize croppedAndFilteredImageUUID=_croppedAndFilteredImageUUID;
@property(retain, nonatomic) ICDocCamImageQuad *imageQuad; // @synthesize imageQuad=_imageQuad;
@property(retain, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)allUUIDs;
@property(readonly, nonatomic) id <DCScanDataDelegate> scanDataDelegate;
@property(readonly, nonatomic) _Bool hasFilter;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

