#import "FDModel.h"


#pragma mark Forward Declarations


#pragma mark - Protocol

@protocol FDDataClientDelegate<NSObject>


#pragma mark - Required Methods

@required

// The class returned from this method must be a subclass of FDModel.
- (Class)modelClassForIdentifier: (id)identifier;


#pragma mark - Optional Methods

@optional


@end