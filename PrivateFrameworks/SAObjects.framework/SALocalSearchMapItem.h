/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAAceSerializable>, NSArray, NSNumber, NSString, SADistance, SALocation;

@interface SALocalSearchMapItem : SADomainObject {
}

@property(copy) NSArray * attributions;
@property(retain) <SAAceSerializable> * detail;
@property(copy) NSString * detailType;
@property(copy) NSString * directionRole;
@property(retain) SADistance * distance;
@property(copy) NSNumber * distanceInMiles;
@property(copy) NSString * label;
@property(copy) NSNumber * localSearchProviderId;
@property(retain) SALocation * location;
@property(copy) NSNumber * placeId;

+ (id)mapItem;
+ (id)mapItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributions;
- (id)detail;
- (id)detailType;
- (id)directionRole;
- (id)distance;
- (id)distanceInMiles;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)label;
- (id)localSearchProviderId;
- (id)location;
- (id)placeId;
- (void)setAttributions:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setDetailType:(id)arg1;
- (void)setDirectionRole:(id)arg1;
- (void)setDistance:(id)arg1;
- (void)setDistanceInMiles:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocalSearchProviderId:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPlaceId:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
