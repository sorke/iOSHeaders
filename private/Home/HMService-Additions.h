//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMService.h"

@interface HMService (Additions)
+ (id)hf_defaultServiceSubtypeForServiceType:(id)arg1;
+ (id)_hf_allowedChildServicesTypeMap;
+ (id)hf_roomsForServices:(id)arg1;
+ (id)hf_standardServiceTypes;
+ (id)hf_standardServices;
- (_Bool)hf_canGroupWithService:(id)arg1;
- (id)hf_effectiveServiceSubtype;
- (id)hf_parentService;
- (_Bool)_hf_isDirectlyOrIndirectlyLinkedToService:(id)arg1;
- (id)hf_childServices;
- (id)hf_childServicesOfType:(id)arg1;
- (_Bool)hf_isVisible;
- (_Bool)hf_isLegacyService;
- (_Bool)hf_supportsGroups;
- (id)hf_updateIconDescriptor:(id)arg1;
- (id)hf_iconDescriptor;
- (id)hf_effectiveServiceType;
- (id)hf_serviceDescriptor;
- (id)hf_characteristicOfType:(id)arg1;
@end

