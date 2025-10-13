
Coordinate2D {
x: i64
y: i64

  to_f7() {
    return [this.x / 1'000'000.0f, this.y / 1'000'000.0f];
  }

}


Coordinate2D {
x: i64
y: i64
z: i64

  to_f7() {
    return [this.x / 1'000'000.0f, this.y / 1'000'000.0f, this.z / 1'000'000.0f];
  }

}


BaseObject {
id: u32
label: string
}

Object2D: BaseObject {
  Coordinate2D position
}

Object3D: BaseObject {
  Coordinate3D position
}
