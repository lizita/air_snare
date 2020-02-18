void loop() {
  // Get some data
  String data = String(10);
  // Trigger the integration
  Particle.publish("air_snare", data, PRIVATE);
  // Wait 60 seconds
  delay(60000);
}