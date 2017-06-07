//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactHeaderView.h>

#import <ContactsUI/CNPropertyGroupItemDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UITableView;
@protocol CNPropertyCellDelegate;

@interface CNContactHeaderEditView : CNContactHeaderView <UITableViewDelegate, UITableViewDataSource, CNPropertyGroupItemDelegate>
{
    UITableView *_editingTable;
    _Bool _pinToReadableContentGuide;
    NSArray *_editingGroups;
    id <CNPropertyCellDelegate> _namePropertyDelegate;
    NSLayoutConstraint *_tableToTrailingEdgeConstraint;
    NSLayoutConstraint *_tableToTrailingReadableGuideConstraint;
}

+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 shouldAllowImageDrops:(_Bool)arg3;
+ (id)contactHeaderViewWithContact:(id)arg1 editingGroups:(id)arg2 shouldAllowTakePhotoAction:(_Bool)arg3;
@property(retain, nonatomic) NSLayoutConstraint *tableToTrailingReadableGuideConstraint; // @synthesize tableToTrailingReadableGuideConstraint=_tableToTrailingReadableGuideConstraint;
@property(retain, nonatomic) NSLayoutConstraint *tableToTrailingEdgeConstraint; // @synthesize tableToTrailingEdgeConstraint=_tableToTrailingEdgeConstraint;
@property(nonatomic) _Bool pinToReadableContentGuide; // @synthesize pinToReadableContentGuide=_pinToReadableContentGuide;
@property(nonatomic) __weak id <CNPropertyCellDelegate> namePropertyDelegate; // @synthesize namePropertyDelegate=_namePropertyDelegate;
@property(retain, nonatomic) NSArray *editingGroups; // @synthesize editingGroups=_editingGroups;
- (void).cxx_destruct;
- (id)_phoneticNameForValue:(id)arg1 property:(id)arg2;
- (void)propertyItem:(id)arg1 willChangeValue:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)becomeFirstResponder;
- (void)setBackgroundColor:(id)arg1;
- (id)selectEditingGroupAtIndex:(unsigned long long)arg1;
- (void)saveContactPhoto;
- (_Bool)photoIsModified;
- (_Bool)hasPhoto;
- (void)reloadDataPreservingChanges:(_Bool)arg1;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)setEditingGroups:(id)arg1 withUpdate:(_Bool)arg2;
- (id)initWithContact:(id)arg1 editingGroups:(id)arg2 frame:(struct CGRect)arg3 shouldAllowTakePhotoAction:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
